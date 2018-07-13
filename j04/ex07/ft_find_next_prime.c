/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:34:51 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/13 13:03:33 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (nb % i != 0)
	{
		i = i + 1;
		if (i > nb)
			return (0);
	}
	if (nb == i)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb >= 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb = nb + 1;
	}
	return (0);
}
