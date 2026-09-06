/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyassire <dyassire@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:22:00 by dyassire          #+#    #+#             */
/*   Updated: 2026/09/06 17:45:34 by dyassire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_visible(int tab[4])
{
	int	max;
	int	compteur;
	int	i;

	max = 0;
	compteur = 0;
	i = 0;
	while (i < 4)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			compteur++;
		}
		i++;
	}
	return (compteur);
}
