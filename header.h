/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyassire <dyassire@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:31:54 by dyassire          #+#    #+#             */
/*   Updated: 2026/09/06 17:50:17 by dyassire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define N 4

int		count_visible(int tab[N]);
int		valid_print(int l, int c, int grille[N][N]);
void	ft_print_grid(int grille[N][N], int valeurs[16]);
void	ft_print_border(void);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
