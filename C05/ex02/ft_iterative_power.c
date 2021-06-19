int	ft_iterative_power(int nb, int power)
{
	int	number;

	number = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 1)
		{
			nb = number * nb;
			power--;
		}
	}
	return (nb);
}
