/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyassire <dyassire@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:29:06 by dyassire          #+#    #+#             */
/*   Updated: 2026/09/06 17:46:31 by dyassire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int	main(int argc, char **argv)
{
	int	valeurs[16];
	int	grille[4][4];
	int	i;
	int	i2;
	int	l;
	int	c;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	i2 = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			if (i2 >= 16)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			valeurs[i2] = argv[1][i] - '0';
			i2++;
		}
		else if (argv[1][i] != ' ')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	if (i2 != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	l = 0;
	while (l < 4)
	{
		c = 0;
		while (c < 4)
		{
			grille[l][c] = 0;
			c++;
		}
		l++;
	}
	// Ici il faudra ajouter la logique de résolution
	// Pour l'instant on affiche juste la grille vide
	ft_print_grid(grille, valeurs);
	return (0);
}
