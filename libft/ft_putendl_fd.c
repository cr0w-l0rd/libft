/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:51:53 by mbiusing          #+#    #+#             */
/*   Updated: 2025/11/17 21:53:40 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     if (argc != 3)
//     {
//         printf("Blud u gotta put in 3 arguments, smthn liddis : a.out yoooooo 1");
//         return (1);
//     }

//     char *str = argv[1];
//     int fd = ft_atoi(argv[2]);
//     ft_putendl_fd(str, fd);
//     return (0);
// }
