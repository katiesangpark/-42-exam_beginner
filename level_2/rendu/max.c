/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 03:24:31 by jochang           #+#    #+#             */
/*   Updated: 2018/05/17 03:27:24 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int		i;
	int		m;

	if (!len)
		return (0);
	i = -1;
	m = tab[0];
	while (++i < len)
		m = (m > tab[i] ? m : tab[i]);
	return (m);
}
