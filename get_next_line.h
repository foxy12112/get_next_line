/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:15:28 by ldick             #+#    #+#             */
/*   Updated: 2024/03/21 19:32:28 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read_to_s1(int fd, char *s1);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *buff);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *s1);
char	*ft_new_str(char *s1);

#endif