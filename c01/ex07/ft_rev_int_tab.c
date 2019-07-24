/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:29:50 by rdebroux          #+#    #+#             */
/*   Updated: 2019/07/18 18:01:36 by rdebroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp[size];

	tmp = {0};
	tmp[size + 1] = '\0';
	i = 0;

	while(size != 0)
	{
		tmp[i] = *tab[size];
		i++;
		size--;
	}

	i = 0;

	while(tmp[i] != '\0')
	{
		*tab[i] = tmp[i];
		i++;
	}
}

