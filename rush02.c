/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgawthro <pgawthro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:43:53 by pgawthro          #+#    #+#             */
/*   Updated: 2024/08/04 11:33:05 by pgawthro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void    first_row(int x, int column)
{
    if (column == 0)
    {
        ft_putchar('A');
    }
    else if (column == x - 1)
    {
        ft_putchar('A');
    }
    else
    {
        ft_putchar('B');
    }
}

void    last_row(int x, int column)
{
    if (column == 0)
    {
        ft_putchar('C');
    }
    else if (column == x - 1)
    {
        ft_putchar('C');
    }
    else
    {
        ft_putchar('B');
    }
}

void    other_rows(int x, int column)
{
    if (column == 0)
    {
        ft_putchar('B');
    }
    else if (column == x - 1)
    {
        ft_putchar('B');
    }
    else
    {
        ft_putchar(' ');
    }
}

void    rush(int x, int y)
{
    int row;
    int column;

    row = 0;
    while (row < y)
    {
        column = 0;
        while (column < x)
        {
            if (row == 0)
                first_row(x, column);
            else if (row == y - 1)
                last_row(x, column);
            else
                other_rows(x, column);
            column++;
        }
        row++;
        ft_putchar('\n');
    }
}	
