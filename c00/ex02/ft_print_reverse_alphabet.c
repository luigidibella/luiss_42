/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:15:03 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/09/22 12:35:39 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
		write(1,&c,1);
}

void ft_print_reverse_alphabet(void)
{
		int		i;
		i = 122;
		while(i >= 97)
		{
				ft_putchar(i);
				i--;
		}
}

/*
int main(void)
{
		ft_print_reverse_alphabet();
		return 0;
}
*/
