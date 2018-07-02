/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 14:20:24 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/14 12:31:03 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_display_file(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(str, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)) == BUF_SIZE)
		write(1, buf, BUF_SIZE);
	write(1, buf, ret);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
		write(1, "Too many arguments.\n", 20);
	return (0);
}
