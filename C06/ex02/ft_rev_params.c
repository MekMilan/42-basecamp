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

int	arg_len(int c)
{
	int	count;

	count = 0;
	while (count < c)
	{
		count++;
	}
	return (count - 1);
}

int	main(int argc, char *argv[])
{
	int	count;

	count = arg_len(argc);
	while (count < argc && count != 0)
	{
		print(&argv[count][0]);
		print("\n");
		count--;
	}
	return (0);
}
