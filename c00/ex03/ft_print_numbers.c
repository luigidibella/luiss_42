/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:46:58 by ldi-bell          #+#    #+#             */
/*   Updated: 2023/09/22 12:37:59 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
		write(1,&c,1);
}

void ft_print_numbers(void)
{
		int		i;
		i = 48;
		while(i <=57)
		{
				ft_putchar(i);
				i++;
		}
}

/*
int main(void)
{
		ft_print_numbers();
		return 0;
}
*/
