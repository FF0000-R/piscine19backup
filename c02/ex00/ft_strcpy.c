/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:18:36 by rdebroux          #+#    #+#             */
/*   Updated: 2019/07/18 21:56:45 by rdebroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src[i] != '\0')
	{
		*src[i] = *dest[i];
		i++;
	}
	i++;
	*dest[i] = '\0';
	return (*dest);
}