/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:28:23 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 16:28:47 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

void	ft_solve(int table[4][4], int input[16], int *stop);
void	ft_test_values(int table[4][4], int input[16], int *stop, int ij[2]);
int		ft_possible(int table[4][4], int input[16]);
int		ft_possible_quads(int *quads[4], int view1, int view2);

#endif
