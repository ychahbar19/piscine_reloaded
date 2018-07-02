/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 10:58:27 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/13 17:15:15 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		counter;

	counter = 0;
	while (counter < length)
	{
		(*f)(tab[counter]);
		counter++;
	}
}
