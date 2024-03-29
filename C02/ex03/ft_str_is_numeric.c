/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laristid <laristid@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:14:14 by laristid          #+#    #+#             */
/*   Updated: 2021/06/16 11:38:08 by laristid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 48 || str[c] > 57)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
