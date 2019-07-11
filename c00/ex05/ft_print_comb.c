/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:06:25 by rdebroux          #+#    #+#             */
/*   Updated: 2019/07/09 13:06:28 by rdebroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void ft_print_comb(void)
{
	char a, b, c;

	a = '0' - 1;
	while (a <= 9)
	{
		b = a;
		while (b <= 9)
		{
			c = b;
			while (c <= 9)
			{

				
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);

				c++;
			}


			b++;
		}


		a++;
	}


}