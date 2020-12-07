/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 00:44:31 by jceia             #+#    #+#             */
/*   Updated: 2020/12/07 01:07:29 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
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

int		ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

struct s_stock_str	create_stock_str(char *str)
{
	struct s_stock_str a;
	
	a.size = ft_strlen(str);
	a.str = str;
	a.copy = ft_strdup(str);
	return (a);
}

struct s_stock_str
		*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct 	s_stock_str	*ptr;

	ptr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		ptr[index] = create_stock_str(av[index]);
		index++;
	}
	ptr[ac].str = 0;
	return (ptr);
}
