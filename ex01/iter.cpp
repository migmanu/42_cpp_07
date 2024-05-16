/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:11:31 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/05/16 13:11:52 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstddef>
#include <iostream>

template<typename T>
void print(T &e)
{
	std::cout << "Element: " << e << std::endl;
}

template<typename T>
void duplicate(T &e)
{
	e *= 2;
}

template<typename T>
void to_upper(T &e)
{
	T cpy = e;
	std::cout << static_cast<char>(std::toupper(static_cast<char>(cpy)));
}

template<typename T>
void iter(T *arr, size_t size, void (*f)(T &e))
{
	for (size_t i = 0; i < size; i++)
	{
		f(arr[i]);
	}
	return;
}

template <typename T>
void dynamicArray(T a, T b, T c)
{
    size_t S = 3;
    T* newArray = new T[S];
	newArray[0] = a;
	newArray[1] = b;
	newArray[2] = c;
	iter(newArray, S, print);
	std::cout << "Duplicate" << std::endl;
	iter(newArray, S, duplicate);
	iter(newArray, S, print);
	std::cout << "Capitalize" << std::endl;
	iter(newArray, S, to_upper);
	iter(newArray, S, print);
    delete [] newArray;
}
