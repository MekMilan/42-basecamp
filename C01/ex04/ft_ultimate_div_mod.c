/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laristid <laristid@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:46:56 by laristid          #+#    #+#             */
/*   Updated: 2021/06/14 18:55:56 by laristid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer;
	int	resto;

	buffer = *a / *b;
	resto = *a % *b;
	*a = buffer;
	*b = resto;
}
