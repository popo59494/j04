/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:18:06 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/13 15:03:40 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int k;

	i = 0;
	k = nb;
	if (power > 0)
	{
		while (i != (power - 1))
		{
			nb = nb * k;
			i = i + 1;
		}
		return (nb);
	}
	if (power == 0)
		return (1);
	return (0);
}
