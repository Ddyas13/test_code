/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyassire <dyassire@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:05:25 by dyassire          #+#    #+#             */
/*   Updated: 2026/09/06 17:46:01 by dyassire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	valid_print(int l, int c, int grille[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != c && grille[l][i] == grille[l][c] && grille[l][c] != 0)
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (i != l && grille[i][c] == grille[l][c] && grille[l][c] != 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
