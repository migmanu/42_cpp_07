/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmanu <jmanuelmigoya@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:34:58 by migmanu           #+#    #+#             */
/*   Updated: 2024/06/12 15:33:27 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>

#define MAX_VAL 750
int main(void)
{
	std::cout << std::endl << "MY TEST" << std::endl;
	std::cout << std::endl << "INTEGERS" << std::endl;
	unsigned int r = 9;
	std::cout << std::endl << "test out range: " << std::endl;
	try
	{
		Array<int> a(r);
		a[r] = 1;
		a.print();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << "STRINGS" << std::endl;
	Array<std::string> strArr(1);
	try
	{
		std::string str = "Hola";
		strArr[0] = str;
		strArr.print();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	// 42 tests
	std::cout << std::endl << std::endl << "42 TESTS" << std::endl;
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		std::cout << "before: " << numbers[0] << std::endl;
		numbers[0] = 0;
		std::cout << "after: " << numbers[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "before: " << numbers[MAX_VAL - 1] << std::endl;
		numbers[MAX_VAL - 1] = 0;
		std::cout << "after: " << numbers[MAX_VAL - 1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete[] mirror; //
	return 0;
}
