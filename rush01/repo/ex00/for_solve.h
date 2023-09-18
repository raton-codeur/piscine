/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_solve.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:24:16 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/03 16:24:58 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOR_SOLVE_H
# define FOR_SOLVE_H

int		ft_is_unique(int *quads[4]);
int		ft_is_complete(int *quads[4]);
int		ft_check_views(int *quads[4], int view1, int view2);
int		ft_get_view(int *quads[4]);

#endif
