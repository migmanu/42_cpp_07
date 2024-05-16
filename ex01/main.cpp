/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:31:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/05/16 13:12:03 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.cpp"

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
