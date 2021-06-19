#include <unistd.h>

void	print(char *c)
{
	int	count;

	count = 0;
	while (c[count] != '\0')
	{
		write(1, &c[count], 1);
		count++;
	}
}

void	is_ascii(char c)
{
	int	count;

	count = 0;
	if (c < 33 && c > 126)
	{
		else if (c < 33 && c > 47 || c < 58 && c > 64 || c < 91 && c > 96)
		{
			else if (c < 48 && c > 57)
			{
			}
		}
		else if (c < 123 && c > 126)
		{
		}
	}
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 1;
	while (count < argc)
	{
		print(&argv[count][0]);
		print("\n");
		count++;
	}
	return (0);
}
