/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:11:31 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/06/07 22:12:57 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstddef>
#include <iostream>
#include <typeinfo>

template<typename T>
void print(T &e)
{
	std::cout << "Element: " << e << std::endl;
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
