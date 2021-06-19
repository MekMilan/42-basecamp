/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laristid <laristid@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:34:15 by laristid          #+#    #+#             */
/*   Updated: 2021/06/17 15:34:16 by laristid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	c_1;
	int	c_2;

	c_1 = 0;
	c_2 = 0;
	while (dest[c_1] != '\0')
	{
		c_1++;
	}
	while (src[c_2] != '\0' && ((unsigned int)c_2 < nb))
	{
		dest[c_1] = src[c_2];
		c_1++;
		c_2++;
	}
	dest[c_1] = '\0';
	return (dest);
}
