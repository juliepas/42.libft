/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:08:17 by jpascal           #+#    #+#             */
/*   Updated: 2016/11/15 03:46:49 by jpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *s)
{
	int index;

	index = 0;
	if (s == NULL)
		ft_putendl("(null)");
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
	ft_putchar('\n');
}
