/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamasir </var/mail/yyamasir>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:21:49 by yyamasir          #+#    #+#             */
/*   Updated: 2021/06/12 22:21:58 by yyamasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	putchar(char c);

void	top_and_bottom_line(int x, int column_num)
{
	if (column_num == 1 || column_num == x)
	{
		putchar('o');
	}
	else
	{
		putchar('-');
	}
}

void	inner_line(int x, int column_num)
{
	if (column_num == 1 || column_num == x)
	{
		putchar('|');
	}
	else
	{
		putchar(' ');
	}
}

void	row_generate(int y, int row_num, int x)
{
	int	column_num;

	column_num = 1;
	while (column_num <= x)
	{
		if (row_num == 1 || row_num == y)
		{
			top_and_bottom_line(x, column_num);
		}
		else
		{
			inner_line(x, column_num);
		}
		column_num = column_num + 1;
	}
}

void	rush(int x, int y)
{
	int	row_num;

	row_num = 1;
	while (row_num <= y)
	{
		row_generate(y, row_num, x);
		write(1, "\n", 1);
		row_num = row_num + 1;
	}
}
