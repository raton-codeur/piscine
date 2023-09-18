/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_quads.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:26:50 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 16:33:35 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_QUADS_H
# define SET_QUADS_H

void	ft_set_quads_column(int table[4][4], int *quads[4], int j);
void	ft_set_quads_row(int table[4][4], int *quads[4], int i);
void	ft_reverse(int *quads[4]);
void	ft_set_quads(int table[4][4], int *quads[4], int index_view);

#endif
