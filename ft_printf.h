/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:09 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/16 13:35:08 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

/* Conversions and flags. */
# define CONVS "cspdiuxX%"
# define CONVS_LEN 9
# define FLAGS "-0.# +"

/* Bases used */
# define DECIMAL   "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

/* (^-^ ) */
int	ft_printf(const char *format, ...);

/* The BASE for everything */
int	ft_print_base(int n, const char *base);
int	ft_print_sbase(size_t n, const char *base);

/* Utils */
int	ft_printdef(va_list arg);
int	ft_printchr(va_list arg);
int	ft_printstr(va_list arg);
int	ft_printptr(va_list arg);
int	ft_printdig(va_list arg);
int	ft_printuns(va_list arg);
int	ft_printhexl(va_list arg);
int	ft_printhexu(va_list arg);

/* FUN */
typedef int	(*t_fun)(va_list);

#endif
