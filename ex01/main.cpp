/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:31:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/06/07 22:13:06 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.cpp"

template <typename T>
void dynamicArray(T a, T b, T c)
{
    size_t S = 3;
    T* newArray = new T[S];
	newArray[0] = a;
	newArray[1] = b;
	newArray[2] = c;
	iter(newArray, S, print);
    delete [] newArray;
}

int main(void)
{
	// INT ARRAY
	{
		std::cout << "INT ARRAY" << std::endl;
		int arr[3] = {9, 2, 3};
		std::cout << "Print elements" << std::endl;
		iter(arr, 3, print);
	}
	// STRING
	{
		std::cout << std::endl << "STRING" << std::endl;
		std::string str = "Hola mundo!";
		std::cout << "Print elements" << std::endl;
		iter(&str, 1, print);
	}
	// CHAR ARRAY
	{
		std::cout << std::endl << std::endl << "CHAR ARRAY" << std::endl;
		char* arr = new char[3];
		arr[0] = 'a';
		arr[1] = 'b';
		arr[2] = 'c';
		std::cout << "Print elements" << std::endl;
		iter(arr, 3, print);
	}
	// TEMPLATE ARRAY
	{
		std::cout << std::endl << std::endl << "TEMPLATE ARRAY" << std::endl;
		std::cout << "Print char elements" << std::endl;
		dynamicArray<char>('a', 'b', 'c');
		std::cout << "Print int elements" << std::endl;
		dynamicArray<int>(1, 2, 3);
	}
	return 0;
}
