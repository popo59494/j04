#include <stdio.h>

int		ft_is_prime(int index);

void	ft_putnbr(int nb);	

int	main(void)
{
	int i;

	i = ft_is_prime(7);
	printf("%d", i);
	return (0);
}
