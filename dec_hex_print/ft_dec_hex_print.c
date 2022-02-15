#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

void ft_hex(int num)
{
	char	*hexx;

	hexx = "0123456789abcdef";
	if (num >= 0 && num <= 255)
	{
		write(1, &hexx[num / 16], 1);
		write(1, &hexx[num % 16], 1);
	}
	else
	{
		ft_hex(num / 16);
		write(1, &hexx[num % 16], 1);
	}
}

int	main(int argc, char *argv[])
{
	int	length;
	int	dec;

	length = -1;
	if (argc != 2)
		return (-1);
	while (argv[1][++length])
		if (!((argv[1][length] >= '0') && (argv[1][length] <= '9')))
			return (-1);
	dec = ft_atoi(argv[1]);
	ft_hex(dec);
	write(1, "\n", 1);
}
