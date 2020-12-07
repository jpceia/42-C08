/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 00:22:59 by jceia             #+#    #+#             */
/*   Updated: 2020/12/07 00:32:17 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE	1
# define FALSE	0

# define SUCCESS 0

# define EVEN(x) x % 2 == 0 ? 1 : 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG  "I have an odd number of arguments."

typedef int	t_bool;

#endif
