/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:26:26 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 21:21:40 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int main(void)
{


//	printf("%d = ",	ft_printf("%3s%3s", "hello", "world"));
	ft_printf("%-149.*%%-114.120i%0*.24%%--*.28d" ,-63,1318471055,-125,-68,-1205906582);
	printf("%-149.*%%-114.120i%0*.24%%--*.28d" ,-63,1318471055,-125,-68,-1205906582);
//	ft_printf("|%-*.98u\n|" ,117,4198534266u);
//	printf("%s\n", NULL);

	return (0);
}
