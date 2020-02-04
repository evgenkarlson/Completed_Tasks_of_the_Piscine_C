/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <jaleman@student.42.us.org>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 18:59:06 by exam              #+#    #+#             */
/*   Updated: 2016/09/01 19:23:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.

Напишите программу, которая принимает строку и отображает в ней первый 
символ «z», за которым следует новая строка. Если в строке нет 
символов «z», программа записывает «z», за которым следует новая строка. 
Если количество параметров не равно 1, программа отображает «z», за 
которым следует новая строка.

Example:
Пример:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$


   ************************************************************************** */
/* *********************_НЕ УВЕРЕН_ЧТО_РЕШЕНИЕ_ВЕРНО************************* */
/* ************************************************************************** */




#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc != 2)
		write(1, "z\n", 2);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
			{
				write(1, "z", 1);
				break ;
			}
			i += 1;
		}
		write(1, "\n", 1);
	}
	return (0);
}
