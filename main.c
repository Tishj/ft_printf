/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 12:23:32 by tbruinem       #+#    #+#                */
/*   Updated: 2019/11/30 12:23:32 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

#define INPUT "%p\n", &arr

int		main(int argc, char **input)
{
	char arr[40];
	char *str;
	long adress;
	int n;

	n = -3245;
	printf("mine count: %d\n", ft_printf(INPUT));
//	printf("\n");
	printf("real count: %d\n", printf(INPUT));
//	printf("%-23d", 3245);
//	str = &arr[4];
//	adress = (long)str;
//	printf("%#lx\n", (long)str);
//	printf("%p\n", (long)str);
	return (0);
}
