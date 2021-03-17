/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:59:06 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/17 21:23:04 by jinseonghee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	char	*buf;
	int		arg_num;

	if (argc == 1)
	{
		buf = get_buf_std();
		print_global(buf);
		return (0);
	}
	else
	{
		arg_num = 1;
		while (arg_num < argc)
		{
			buf = get_buf_file(argv[arg_num]);
			print_global(buf);
			if (argc > 2)
				write(1, "\n", 1);
			arg_num++;
		}
		return (0);
	}
}
