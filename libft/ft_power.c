/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpataki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:17:54 by cpataki           #+#    #+#             */
/*   Updated: 2019/09/08 17:22:53 by cpataki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_power(int i, int n)
{
	size_t	res;

	res = 1;
	if (n < 0)
		return (0);
	while (n > 0)
	{
		res *= i;
		n--;
	}
	return (res);
}
