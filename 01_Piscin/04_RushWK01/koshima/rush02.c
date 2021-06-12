/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamasir </var/mail/yyamasir>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:24:47 by yyamasir          #+#    #+#             */
/*   Updated: 2021/06/12 22:24:52 by yyamasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c);

void	top_line(int x, int column_num)
{
	if (column_num == 1 || column_num == x)
	{
		putchar('A');
		return ;
	}
	putchar('B');
	return ;
}

void	bottom_line(int x, int column_num)
{
	if (column_num == 1 || column_num == x)
	{
		putchar('C');
		return ;
	}
	putchar('B');
	return ;
}

void	inner_line(int x, int column_num)
{
	if (column_num == 1 || column_num == x)
	{
		putchar('B');
		return ;
	}
	putchar(' ');
	return ;
}

void	row_generate(int y, int row_num, int x)
{
	int	column_num;

	column_num = 1;
	while (column_num <= x)
	{
		if (row_num == 1)
		{
			top_line(x, column_num);
		}
		else if (row_num == y)
		{
			bottom_line(x, column_num);
		}
		else
		{
			inner_line(x, column_num);
		}
		column_num = column_num + 1;
	}
	return ;
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
	return ;
}
