/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soseroal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:31:07 by soseroal          #+#    #+#             */
/*   Updated: 2020/07/17 14:48:12 by soseroal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{
	write (1, &c, 1);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = (0);

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');
	return dest;
}

