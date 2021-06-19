/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laristid <laristid@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:34:18 by laristid          #+#    #+#             */
/*   Updated: 2021/06/17 15:54:12 by laristid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	i;
	int	to_find_len;

	c = 0;
	i = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		if (str[c] == to_find[i])
		{
			i++;
			if (i == to_find_len)
				return (str + (c - i) + 1);
		}
		else
		{
			i = 0;
		}
		c++;
	}
	return (0);
}
