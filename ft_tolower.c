/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:28:58 by msimaozi          #+#    #+#             */
/*   Updated: 2022/11/04 10:29:00 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		x = x + 32;
	}
	return (x);
}

/*#include<stdio.h>

int	main(void)
{
	int	x;

	x = 'B';
	printf("%c", ft_tolower(x));
}*/
