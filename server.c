/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:33:10 by nhassan           #+#    #+#             */
/*   Updated: 2024/08/24 10:49:14 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	str_to_binary(char *str)
{
	int		i;
	int		j;
	int		bit;

	j = 0;
	while (str[j])
	{
		i = 7;
		while (i >= 0)
		{
			bit = (str[j] >> i) & 1;
			ft_printf("%d", bit);
			i--;
		}
		j++;
	}
}

void	binary_to_str(char *binary)
{
	int			result;
	size_t		i;
	int			j;

	i = 0;
	while (i < ft_strlen(binary))
	{
		result = 0;
		j = 0;
		while (j < 8 && i < ft_strlen(binary))
		{
			result = (result << 1) | (binary[i] - '0');
			j++;
			i++;
		}
		ft_printf("%c", (char)result);
	}
}

// int main(void)
// {
// 	char binary[] = "01001000011001010110110001101100011011110010110000100000011101110110111101110010011011000110010000100001";
// 	//char *s = "Hello, World!";
// 	binary_to_str(binary);
// 	// ft_printf("the binary represantation of the string '%s' : " ,s);
// 	// str_to_binary(s);
// }
