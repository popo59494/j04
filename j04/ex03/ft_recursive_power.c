/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:33:05 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/13 11:43:32 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		nb = nb * 1;
	if (power > 1)
		nb = nb * ft_recursive_power(nb, (power - 1));
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb);
}
