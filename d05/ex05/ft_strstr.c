/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* - Скомпилируй файл тест. В нем можно увидеть как работает эта функция вживую */

/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


 Reproduce the behavior of the function strstr (man strstr).
 Воспроизвести поведение функции strstr (man strstr).


 ******************************************************************************


Аргументы:

str – указатель на строку, в которой ведется поиск.
to_find – указатель на искомую строку.

Описание:

Функция strstr ищет первое вхождение строки (за исключением признак конца строки), 
на которую указывает аргумент to_find, в строку , на которую указывает аргумент str. 
Если строка to_find имеет нулевую длину, то функция вернет указатель на начало строки str


К примеру: в строке «0123456789», с помощью функции strstr, ищется первое вхождение
строки: «345». На консоль выводится номер первого элемента найденной строки.

   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;
	int	to_find_size;

	i = 0;
	z = 0;
	to_find_size = 0;
	while (to_find[to_find_size])
		to_find_size++;
	if (to_find_size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[z] == str[i + z])
		{
			if (z == to_find_size - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *b)
		{
			a = str;
			while (*a == *b || *b == '\0')
			{
				if (*b == '\0')
					return (str);
				a++;
				b++;
			}
			b = to_find;
		}
		str++;
	}
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		y;
	char	*occurrence;

	occurrence = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			occurrence = str + i;
			y = 0;
			while (str[i + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (occurrence);
				y++;
			}
			occurrence = 0;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
