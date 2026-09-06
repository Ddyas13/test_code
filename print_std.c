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

/*++++++++++++++++++++++++++++++++++++++++++++++*/
/* ce bloc est consacre au fonction d'affichage de base */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 10)
	{
		ft_putnbr(nb /10);
	}
	else
	{
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (!(*str == '\0'))
	{
		ft_putchar(*str);
		str++;
		count++;
	}
}
/*++++++++++++++++++++++++++++++++++++++++++++++*/
/*ce bloc affiche les bordures et le tableau en dur */
int	ft_print_border(void)
{
	int c;

	ft_putstr(" +");
	c = 0;
	while (c < 4)
	{
		ft_putstr("---+");
		c++;
	}
	ft_putchar('\n');
}

// affciher les bordure et les indices en formes 
void	ft_print_gird(int grille[4][4], int valeurs[16])
{
	int	l;
	int	c;

	// pour les indices du haut 
	ft_putstr(" ");
	c = 0;
	while (c < 4)
	{
		ft_putchar(" ");
		ft_putnbr(valeurs[c]);
		ft_putstr(" ");
		c++;
	}
	ft_putchar('\n');
	ft_print_border();
	// pour la ligne avec les indices gauche et a droite 
	l = 0;
	while (1 < 4)
	{
		ft_punbr(valeurs[8 +1]);
		ft_putchar(" ");
		ft_putchar('|');
		c++;
	}
	ft_putchar(' ' );
	ft_putnbr(valeurs[12 + 1]);
	ft_putchar('\n');
	ft_print_border();
	i++;

	// pour les indices du bas
	 ft_pustr(" ");
	 c = 0;
	 while (c < 4)
	 {
		 ft_putchar(' ');
		 ft_putnbr(valeurs[4 + c]);
		 ft_putstr(" ");
		 c++;
	 }
}
