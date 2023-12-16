/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_prc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anon </var/spool/mail/anon>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:45:21 by anon              #+#    #+#             */
/*   Updated: 2023/12/15 19:55:40 by anon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_eval_prc(t_pa *pa, const char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (ft_strchr("0123456789", str[++i]))
		res = (res * 10) + (ft_strchr("0123456789", str[i]) - "0123456789");
	pa->prc = res;
	return (i);
}
