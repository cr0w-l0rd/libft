/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:25:41 by mbiusing          #+#    #+#             */
/*   Updated: 2025/11/17 22:21:45 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memalloced;
	size_t	actualsize;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	actualsize = nmemb * size;
	memalloced = malloc(actualsize);
	if (!memalloced)
		return (NULL);
	ft_bzero(memalloced, actualsize);
	return (memalloced);
}
