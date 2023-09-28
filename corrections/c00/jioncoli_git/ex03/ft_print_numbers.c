/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jioncoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:39:05 by jioncoli          #+#    #+#             */
/*   Updated: 2023/09/28 11:52:47 by jioncoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	m;

	m = '1';
	while (m <= '9')
	{
		write(1, &m, 1);
		m++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
