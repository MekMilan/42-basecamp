/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laristid <laristid@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:34:10 by laristid          #+#    #+#             */
/*   Updated: 2021/06/17 15:34:11 by laristid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[c] != '\0' && s2[c] != '\0' && (c < n - 1))
	{
		if (s1[c] != s2[c])
		{
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		}
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
