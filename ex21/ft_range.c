/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:20:02 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/13 18:36:25 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		diff;
	int		i;
	int		*tab;

	diff = max - min;
	if (diff <= 0)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * diff)))
		return (NULL);
	i = 0;
	while (i < diff)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
