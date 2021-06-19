/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laristid <laristid@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:04:38 by laristid          #+#    #+#             */
/*   Updated: 2021/06/06 16:07:09 by laristid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	rush(int x, int y)
{
	int	c;
	int	d;

	c = 1;
	d = 1;
	while (d <= y)
	{
		while (c <= x)
		{
			if (d == 1 && (c == 1 || c == x))
				ft_putchar(65);
			else if ((c == 1 || c == x) && d == y)
				ft_putchar(67);
			else if ((c >= 1 && (d == 1 || d == y)) || (c == 1 || c == x))
				ft_putchar(66);
			else
				ft_putchar(' ');
			if (c == x)
				ft_putchar('\n');
			c++;
		}
		c = 1;
		d++;
	}
}
