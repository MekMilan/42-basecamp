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
