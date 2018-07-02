/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:49:08 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/15 15:42:52 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		counter;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;
	return (s1[counter] - s2[counter]);
}

int		main(int argc, char **argv)
{
	int		counter;
	char	*tmp;

	counter = 1;
	while (counter < argc - 1)
	{
		if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
		{
			tmp = argv[counter];
			argv[counter] = argv[counter + 1];
			argv[counter + 1] = tmp;
			counter = 0;
		}
		counter++;
	}
	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
