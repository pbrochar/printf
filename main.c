/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:26:26 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 21:07:53 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int main(void)
{


//	printf("%d = ",	ft_printf("%3s%3s", "hello", "world"));
	ft_printf("|%.c|\n", 'a');
	printf("|%.c|\n", 'a');
//	ft_printf("|%-*.98u\n|" ,117,4198534266u);
//	printf("%s\n", NULL);

	return (0);
}
