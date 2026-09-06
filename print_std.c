/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_std.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyassire <dyassire@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 10:59:27 by dyassire          #+#    #+#             */
/*   Updated: 2026/09/06 17:45:18 by dyassire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_border(void)
{
	int	c;

	ft_putstr("+");
	c = 0;
	while (c < 4)
	{
		ft_putstr("---+");
		c++;
	}
	ft_putchar('\n');
}

void	ft_print_grid(int grille[4][4], int valeurs[16])
{
	int	l;
	int	c;

	ft_putstr("  ");
	c = 0;
	while (c < 4)
	{
		ft_putchar(' ');
		ft_putnbr(valeurs[c]);
		ft_putchar(' ');
		c++;
	}
	ft_putchar('\n');
	ft_print_border();
	l = 0;
	while (l < 4)
	{
		ft_putnbr(valeurs[8 + l]);
		ft_putstr(" | ");
		c = 0;
		while (c < 4)
		{
			ft_putnbr(grille[l][c]);
			ft_putstr(" | ");
			c++;
		}
		ft_putnbr(valeurs[12 + l]);
		ft_putchar('\n');
		ft_print_border();
		l++;
	}
	ft_putstr("  ");
	c = 0;
	while (c < 4)
	{
		ft_putchar(' ');
		ft_putnbr(valeurs[4 + c]);
		ft_putchar(' ');
		c++;
	}
	ft_putchar('\n');
}
