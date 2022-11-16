#define MY_FILE	file_temp
#define MY_START	"curl -so file_temp https://www.rimador.net/index-poesia-automatica.php?final="
#define MY_END		"&fs=0&fn=&rand=2546&Submit=Crear+nueva+poes%C3%ADa"

#include "../inc/general.h"

void	help(void)
{
	printf("Help panel\n");
	printf("Introcude las dos ultimas letras\n");
}

void	get_poem(char *s)
{
	char *aux;
	char *url;

	aux = ft_strjoin(MY_START, s);
	url = ft_strjoin(aux, MY_END);
	free(aux);
	system(url);
	sleep(1);
	wait(NULL);
	free(url);
	system("sh helper");
	wait(NULL);
}

void	swap_char(char *a, char *b)
{
	char aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	process_line(char *line)
{
	char	*last;
	char	*pre;
	int	counter;
	char	*aux;

	aux = line;
	while (*line)
		line++;
	while (*(line - 1) != ' ')
		line--;
	last = line--;
	pre = NULL;
	while (line-- != aux && !pre)
	{
		if (*line == ' ')
		{
			pre = line + 1;
			counter = 0;
			while (*pre != ' ')
			{
				pre++;
				counter++;
			}
			if (counter > 2)
				pre = NULL;
		}
	}	
	if (*line)
	{
		swap_char(last, pre);
		swap_char(last + 1, pre + 1);
	}
	aux++;
}

void	apply_vorgon(void)
{
	int	fd;
	char	*line;

	fd = open("final", O_RDONLY);
	line = get_next_line(fd);
	if (!line)
	{
		printf("Mmm eas terminacion no me gusta\nQue no panda el cúnico\nPrueba de nuevo\n");
		exit(0);
	}
	while (line)
	{
		if (ft_strlen(line) != 1)
			process_line(line);
		else
			printf("\n");
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}	
}

int	main(int argc, char **args)
{
	if (!(argc == 2))
		help();
	else
	{
		get_poem(args[1]);
		apply_vorgon();
	}
	return (0);
}
