/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:56:43 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/13 15:00:40 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int k;

	i = 0;
	k = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (k > 0)
	{
		nb = nb * k;
		k = k - 1;
	}
	return (nb);
}
