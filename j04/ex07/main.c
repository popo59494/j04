
int		ft_find_next_prime(int nb);

void	ft_putnbr(int nb);	

int	main(void)
{
	int i;

	i = ft_find_next_prime(90);
	ft_putnbr(i);
	return (0);
}
