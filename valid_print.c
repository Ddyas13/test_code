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

#include <unistd.h>
#include "header.h"
int	valid_print(int l, int c, int grille[4][4])
{
	int	i;

	// On verifie pour la ligne d'abord
	i = 0;
	while (i < 4)
	{
		// Deja si i esr different de c, et que la valeur dans grille[l][i] est doiferrent de la valeur de grille[l][c]
		//et que la valweur en question n'est pas egale a 0 , (por eviter les cases vides)
		if (i != c, && grille[l][i] == grille[l][c] && grille[l][c] != 0)
		{
			return (0);
		}
		i++;
	}
	// On verifie maintenant pour les colones 
	i = 0;
	while (i < 4)
	{
		//meme logique en tenant juste compte des colones ||  mais en cahngeant de ligne
		if (i != l, && grille[i][c] == grille[lc] && grille[lc] != 0)
		{
			return (0);
		}
		i++;
	}
	return (1) // pour dire que aucun doublon n'a ete creer 
}
