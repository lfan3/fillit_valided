/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pieces.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:01:37 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/12 12:03:57 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_compare_tab(int *tab1, int *tab2)
{
	int	i;

	i = -1;
	while (++i < 8)
		if (tab1[i] != tab2[i])
			return (0);
	return (1);
}

int		ft_compare_piece(int *tab, int i)
{
	i += ft_compare_tab(tab, I_PIECE);
	i += ft_compare_tab(tab, IH_PIECE);
	i += ft_compare_tab(tab, O_PIECE);
	i += ft_compare_tab(tab, LR_PIECE);
	i += ft_compare_tab(tab, L_PIECE);
	i += ft_compare_tab(tab, LD_PIECE);
	i += ft_compare_tab(tab, LL_PIECE);
	i += ft_compare_tab(tab, J_PIECE);
	i += ft_compare_tab(tab, JR_PIECE);
	i += ft_compare_tab(tab, JD_PIECE);
	i += ft_compare_tab(tab, JL_PIECE);
	i += ft_compare_tab(tab, T_PIECE);
	i += ft_compare_tab(tab, TR_PIECE);
	i += ft_compare_tab(tab, TD_PIECE);
	i += ft_compare_tab(tab, TL_PIECE);
	i += ft_compare_tab(tab, S_PIECE);
	i += ft_compare_tab(tab, SR_PIECE);
	i += ft_compare_tab(tab, Z_PIECE);
	i += ft_compare_tab(tab, ZR_PIECE);
	return (i);
}

void	ft_normalize(int *tab)
{
	int	i;
	int	min_x;
	int min_y;

	i = -1;
	min_x = 3;
	min_y = 3;
	while (++i < 8)
	{
		if (i % 2 && tab[i] < min_y)
			min_y = tab[i];
		else if (!(i % 2) && tab[i] < min_x)
			min_x = tab[i];
	}
	while (--i >= 0)
	{
		if (i % 2)
			tab[i] -= min_y;
		else
			tab[i] -= min_x;
	}
}

int		*ft_parse_piece(char *piece, char c)
{
	int	i;
	int	t;
	int	*tab;

	i = -1;
	t = 0;
	tab = (int*)malloc(sizeof(int) * 9);
	while (t < 8)
	{
		if (piece[++i] == '#')
		{
			tab[t++] = i % 5;
			tab[t++] = i / 5;
		}
	}
	ft_normalize(tab);
	if (!ft_compare_piece(tab, 0))
		return (NULL);
	tab[t] = (int)c;
	return (tab);
}
