/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:58:16 by mbiusing          #+#    #+#             */
/*   Updated: 2025/11/17 23:27:18 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub;
	size_t		mainlen;

	if (!s)
		return (NULL);
	mainlen = ft_strlen(s);
	if (start >= mainlen)
		return (ft_strdup(""));
	if (len > mainlen - start)
		len = mainlen - start;
	sub = malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while ((s[start + i] != '\0') && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("input the args smthn liddis : 123456789 5 4");
		return (1);
	}
	char *s = argv[1];
	int start = ft_atoi(argv[2]);
	size_t len = ft_atoi(argv[3]);
	char *test = ft_substr(s,start, len);
	printf("%s", test);
	free(test);
	return (0);
}
*/