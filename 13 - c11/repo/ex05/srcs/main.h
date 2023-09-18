/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:59:28 by qhauuy            #+#    #+#             */
/*   Updated: 2023/09/14 19:56:13 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

int		ft_add(int a, int b);
int		ft_subtract(int a, int b);
int		ft_multiply(int a, int b);
int		ft_divide(int a, int b);
int		ft_modulo(int a, int b);
int		ft_atoi(char *s);
void	ft_putnbr(int nbr);
int		ft_same_strings(char *a, char *b);

#endif
