char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{	
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 65 || str[c] > 90)
		{
			if (str[c] < 97 || str[c] > 122)
			{
				return (0);
			}
		}
		c++;
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{	
		if (str[c] >= 65 && str[c] <= 90)
		{
			str[c] += 32;
		}
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	is_word;

	c = 0;
	is_word = 0;
	while (str[c] != '\0')
	{
		str[c] = ft_strlowcase(&str[c]);
		if (ft_str_is_alpha(&str[c]) == 1)
		{
			if (ft_str_is_alpha(&str[c - 1]) != 1)
			{
				ft_strupcase(&str[c]);
			}
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

int	main(void)
{
	ft_strcapitalize("oi, tudo bem? 42palavras cinquenta+e+um");
}
