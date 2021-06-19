/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laristid <laristid@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:47:26 by laristid          #+#    #+#             */
/*   Updated: 2021/06/14 18:58:16 by laristid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	invert(int vector[], int i, int f)
{
	int	buffer;

	buffer = vector[i];
	vector[i] = vector[f];
	vector[f] = buffer;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		invert(tab, i, f);
		i++;
		f--;
	}
}
