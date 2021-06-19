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
	argc++;
	print(&argv[0][0]);
	print("\n");
	return (0);
}
