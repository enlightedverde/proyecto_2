/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:23:23 by valonso           #+#    #+#             */
/*   Updated: 2022/11/13 11:31:21 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define MAX_N_FD 6035
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

#endif
