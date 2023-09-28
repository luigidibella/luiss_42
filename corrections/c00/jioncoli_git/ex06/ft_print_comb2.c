/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jioncoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:24:42 by jioncoli          #+#    #+#             */
/*   Updated: 2023/09/26 13:57:42 by jioncoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_split(int a, int b)
{
	char	c;

	c = 48 + a / 10;
	write(1, &c, 1);
	c = 48 + a % 10;
	write(1, &c, 1);
	write(1, " ", 1);
	c = 48 + b / 10;
	write(1, &c, 1);
	c = 48 + b % 10;
	write(1, &c, 1);
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_split(a, b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)

{
	ft_print_comb2();
}
