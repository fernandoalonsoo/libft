/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fealonso <fealonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:33:48 by fealonso          #+#    #+#             */
/*   Updated: 2024/09/18 18:26:31 by fealonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z' ) || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
