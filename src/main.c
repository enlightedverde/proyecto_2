#define MY_FILE	file_temp
#define MY_START	"curl -so file_temp https://www.rimador.net/index-poesia-automatica.php?final="
#define MY_END		"&fs=0&fn=&rand=2546&Submit=Crear+nueva+poes%C3%ADa"

#include "../inc/general.h"

void	kill_split(char **s)
{
	int	i;

	i = -1;
	while (s[++i])
		free(s[i]);
	free(s);
}

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

int	is_char_set(char c, char *set)
{
	int	i;

	i = -1;
	while (*(set + ++i))
	{
		if (c == *(set + i))
			return (1);
	}
	return (0);
}

int	count_till_set(char *s, char *set)
{
	int	i;

	i = -1;
	while (*(s + ++i))
	{
		if (is_char_set(*(s + i), set))
				return (i);
	}
	return (0);
}

void	process_line(char *line)
{
	char	**words;
	char	*w1;
	int	w1_p1;
	int	w1_p2;
	char	*w1_aux;
	char	*w2;
	int	w2_p1;
	int	w2_p2;
	char	*w2_aux;
	int	i;

	words = ft_split(line, ' ');
	i = 0;
	while (words[i])
		i++;
	w1 = NULL;
	w2 = NULL;
	while (--i != -1 && !w2)
	{
		if (!w1 && ft_strlen(words[i]) > 4)
		{
			w1 = words[i];
			continue ; 	
		}
		if (!w2 && ft_strlen(words[i]) > 4)
			w2 = words[i];
	}
	if (w1 && w2)
	{
		w1_p1 = count_till_set(w1, "aeiou") + 1; 	
		w1_p2 = ft_strlen(w1) - w1_p1;
		w2_p1 = count_till_set(w2, "aeiou") + 1; 	
		w2_p2 = ft_strlen(w2) - w2_p1;
		w1_aux = malloc(100);
		w2_aux = malloc(100);
		ft_strlcpy(w1_aux, w2, w2_p1 + 1);
		ft_strlcpy(w1_aux + w2_p1, w1 + w1_p1, w1_p2 + 1);
		ft_strlcpy(w2_aux, w1, w1_p1 + 1);
		ft_strlcpy(w2_aux + w1_p1, w2 + w2_p1, w2_p2 + 1);
		i = -1;
		while (words[++i])
		{
			if (words[i] == w1)
			{
				free(w1);
				words[i] = w1_aux;
			}
			if (words[i] == w2)
			{
				free(w2);
				words[i] = w2_aux;
			}
		}
	}
	printf("%s", words[0]);
	i = 0;
	while (words[++i] != NULL)
		printf(" %s", words[i]);
	kill_split(words);
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
