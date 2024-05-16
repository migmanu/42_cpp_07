/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:31:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/05/16 12:07:26 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>

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

int main(void)
{
	// INT ARRAY
	std::cout << "INT ARRAY" << std::endl;
	int arr[3] = {9, 2, 3};
	std::cout << "Print elements" << std::endl;
	iter(arr, 3, print);
	std::cout << "Duplicate elements" << std::endl;
	iter(arr, 3, duplicate);
	iter(arr, 3, print);
	// STRING
	std::cout << std::endl << "STRING" << std::endl;
	std::string str = "Hola mundo!";
	std::cout << "Print elements" << std::endl;
	iter(&str, 1, print);
	std::cout << "Capitalize elements" << std::endl;
	iter(str.c_str(), str.length(), to_upper);
	// TEMPLATE ARRAY
	std::cout << std::endl << "TEMPLATE ARRAY" << std::endl;
	std::cout << "Print char elements" << std::endl;
	dynamicArray<char>('a', 'b', 'c');
	std::cout << "Print int elements" << std::endl;
	dynamicArray<int>(1, 2, 3);
	return 0;
}
