/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 20:28:56 by jochang           #+#    #+#             */
/*   Updated: 2018/05/16 20:31:48 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc > 1)
		while (argv[argc - 1][++i])
			write(1, &argv[argc - 1][i], 1);
	write(1, "\n", 1);
	return (0);
}
