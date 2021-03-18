/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:38:56 by shpark            #+#    #+#             */
/*   Updated: 2021/03/11 17:27:37 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char *a;
	char *b;
	char *c;
	char *result_c;
	char *result_ft;

	a = "Foo Bar Baz";
	b = "Bar";
	c = "foo bar";
	result_c = strstr(a, b);
	result_ft = ft_strstr(a, b);
	printf("=====CASE1=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "foo");
	result_ft = ft_strstr(a, "foo");
	printf("=====CASE2=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "bar");
	result_ft = ft_strstr(a, "bar");
	printf("=====CASE3=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "");
	result_ft = ft_strstr(a, "");
	printf("=====CASE4=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "foo bar over");
	result_ft = ft_strstr(a, "foo bar over");
	printf("=====CASE5=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr(a, "foo bar");
	result_ft = ft_strstr(a, "foo bar");
	printf("=====CASE6=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr("", "foo bar over");
	result_ft = ft_strstr("", "foo bar over");
	printf("=====CASE7=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
	result_c = strstr("", "");
	result_ft = ft_strstr("", "");
	printf("=====CASE8=====\n");
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}
