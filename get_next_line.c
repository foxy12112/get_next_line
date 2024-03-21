/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:29:08 by ldick             #+#    #+#             */
/*   Updated: 2024/03/21 19:32:18 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_to_left_str(int fd, char *s1)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(s1, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		s1 = ft_strjoin(s1, buff);
	}
	free(buff);
	return (s1);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s1;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	s1 = ft_read_to_left_str(fd, s1);
	if (!s1)
		return (NULL);
	line = ft_get_line(s1);
	s1 = ft_new_str(s1);
	return (line);
}
