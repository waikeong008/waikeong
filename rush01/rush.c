/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ho-wai-keong <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:38:38 by ho-wai-keong      #+#    #+#             */
/*   Updated: 2025/03/01 22:38:51 by ho-wai-keong     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= y && x > 0)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x))
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
