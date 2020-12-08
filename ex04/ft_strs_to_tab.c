/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 07:36:40 by jceia             #+#    #+#             */
/*   Updated: 2020/12/08 07:56:20 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char				*ft_strdup(char *src)
{
	unsigned int	index;
	char			*dest;

	index = 0;
	while (src[index])
		index++;
	dest = malloc(index + 1);
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	create_stock_str(char *str)
{
	struct s_stock_str s;

	s.size = ft_strlen(str);
	s.str = str;
	s.copy = ft_strdup(str);
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*arr;

	arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	arr[ac].str = 0;
	index = 0;
	while (index < ac)
	{
		arr[index] = create_stock_str(av[index]);
		index++;
	}
	return (arr);
}
