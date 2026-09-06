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

int	check_row(int grille[4][4], int l, int valeurs[16])
{
	int	tab[4];
	int	i;
	int	visible_gauche;
	int	visible_droite;

	i = 0;
	while (i < 4)
	{
		tab[i] = grille[l][i];
		i++;
	}
	visible_gauche = count_visible(tab);
	i = 0;
	while (i < 4)
	{
		tab[i] = grille[l][3 - i];
		i++;
	}
	visible_droite = count_visible(tab);
	if (visible_gauche != valeurs[8 + l] || visible_droite != valeurs[12 + l])
		return (0);
	return (1);
}

int	check_col(int grille[4][4], int c, int valeurs[16])
{
	int	tab[4];
	int	i;
	int	visible_haut;
	int	visible_bas;

	i = 0;
	while (i < 4)
	{
		tab[i] = grille[i][c];
		i++;
	}
	visible_haut = count_visible(tab);
	i = 0;
	while (i < 4)
	{
		tab[i] = grille[3 - i][c];
		i++;
	}
	visible_bas = count_visible(tab);
	if (visible_haut != valeurs[c] || visible_bas != valeurs[4 + c])
		return (0);
	return (1);
}

int	solve(int grille[4][4], int valeurs[16])
{
	int	l;
	int	c;
	int	num;

	l = 0;
	while (l < 4)
	{
		c = 0;
		while (c < 4)
		{
			if (grille[l][c] == 0)
			{
				num = 1;
				while (num <= 4)
				{
					grille[l][c] = num;
					if (valid_print(l, c, grille))
					{
						if (solve(grille, valeurs))
							return (1);
					}
					grille[l][c] = 0;
					num++;
				}
				return (0);
			}
			c++;
		}
		l++;
	}
	l = 0;
	while (l < 4)
	{
		if (!check_row(grille, l, valeurs))
			return (0);
		l++;
	}
	c = 0;
	while (c < 4)
	{
		if (!check_col(grille, c, valeurs))
			return (0);
		c++;
	}
	return (1);
}

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
	if (solve(grille, valeurs))
		ft_print_grid(grille, valeurs);
	else
		write(1, "Error\n", 6);
	return (0);
}
