/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 19:36:45 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/13 11:45:16 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		index = 0;
	if (index == 1)
		index = 1;
	if (index > 1)
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
