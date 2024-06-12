/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:11:31 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/06/12 15:44:45 by migmanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstddef>
#include <iostream>

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

template<typename T>
void iter(T *arr, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(arr[i]);
	}
	return;
}

template<typename T>
void iter(T *arr, size_t size, void (*f)(const T &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(arr[i]);
	}
	return;
}
