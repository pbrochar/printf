/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:45:54 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/25 21:12:41 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		count_flags(s_varg *ftpf)
{
	int nb;

	nb = 0;
	if (ftpf->str[ftpf->pos] == '*')
	{
		nb = va_arg(*(ftpf->lst), int);
		ftpf->pos++;
		return (nb);
	}
	while (ftpf->str[ftpf->pos] == '0')
		ftpf->pos++;
	if (ftpf->str[ftpf->pos] == '-')
	{
		while (ftpf->str[ftpf->pos] == '-')
			ftpf->pos++;
		nb = ft_atoi(&(ftpf->str[ftpf->pos]));
		while (ftpf->str[ftpf->pos] == '-' || ft_isdigit(ftpf->str[ftpf->pos]))
			ftpf->pos++;
		return (nb);
	}
	else if (ft_isdigit(ftpf->str[ftpf->pos]))
	{
		nb = ft_atoi(&(ftpf->str[ftpf->pos]));
		while (ft_isdigit(ftpf->str[ftpf->pos]))
			ftpf->pos++;
		return (nb);
	}
	return (0);
}

static void		init_param(s_varg *ftpf, s_flags *flags)
{
	int nb;

	if (ftpf->str[ftpf->pos] == '0')
		flags->nb_zero = count_flags(ftpf);
	else if (ftpf->str[ftpf->pos] == '-')
		flags->nb_dash = count_flags(ftpf);
	else if (ftpf->str[ftpf->pos] != '.' && (pf_istype(ftpf->str[ftpf->pos]) == -1))
	{
		nb = count_flags(ftpf);
		if (nb < 0)
			flags->nb_dash = -nb;
		else
			flags->nb_space = nb;
	}
	if (ftpf->str[ftpf->pos] == '.')
	{
		ftpf->pos++;
		flags->precision = count_flags(ftpf);
	}
	flags->eq_type = pf_istype(ftpf->str[ftpf->pos]);
	flags->type = ftpf->str[ftpf->pos];
}

void			ft_put_param(s_varg *ftpf)
{
	s_flags	flags;

	init_s_flags(&flags);
	ftpf->pos++;
	init_param(ftpf, &flags);

/*	printf("zero = %d\n", flags.nb_zero);
	printf("dash = %d\n", flags.nb_dash);
	printf("space = %d\n", flags.nb_space);
	printf("precision = %d\n", flags.precision);
	printf("type = %c\n", flags.type);*/
	print_flags(ftpf, &flags);
}
