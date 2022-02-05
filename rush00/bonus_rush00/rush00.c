/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:50:16 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/05 18:46:16 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

typedef struct t_characters {
	char	first;
	char	second;
	char	third;
}	t_characters;

void	ft_start_end_print(t_characters chars, int l, int columns)
{
	if (l == 0)
	{
		ft_putchar(chars.first);
	}
	else if (l == columns -1)
	{
		ft_putchar(chars.third);
	}
	else
	{
		ft_putchar(chars.second);
	}
}

void	ft_print_row(t_characters chars, int columns)
{
	int	i;

	i = 0;
	while (i < columns)
	{
		ft_start_end_print(chars, i, columns);
		i++;
	}
	ft_putchar('\n');
}

void	ft_init_struct(t_characters *chars, char first, char second, char third)
{
	chars->first = first;
	chars->second = second;
	chars->third = third;
}

void	rush(int x, int y)
{
	int				k;
	t_characters	first_row;
	t_characters	middle_row;
	t_characters	last_row;

	ft_init_struct(&first_row, 'o', '-', 'o');
	ft_init_struct(&middle_row, '|', ' ', '|');
	ft_init_struct(&last_row, 'o', '-', 'o');
	if (y > 0)
	{
		ft_print_row(first_row, x);
	}
	k = 0;
	while (k < (y -2))
	{
		ft_print_row(middle_row, x);
		k++;
	}
	if (y > 1)
	{
		ft_print_row(last_row, x);
	}	
}
