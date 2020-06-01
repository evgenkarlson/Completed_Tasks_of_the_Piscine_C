/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/05/12 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	команда для компиляции и одновременного запуска                           */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out	   	      */
/* ************************************************************************** */


void	remove_element(char *array, int index, int array_length)
{
	int i;

	i = index;
	while (i < array_length - 1)
	{
		array[i] = array[i + 1];
		i++;
	}
}

int		ft_compact(char **tab, int length)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (!tab[i])
		{
			remove_element(tab[i], i, length);
			length--;
		}
		i++;
	}
	return (length);
}


int main(int argc, char *argv[])
{
    ft_compact(argv, argc);
    return (0);
}
