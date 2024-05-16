/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:08:25 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/05/16 17:38:26 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>
#include <iostream>

template <typename T> Array<T>::Array(void)
{
	_arr = new T * (sizeof(T) * 0);
	_size = 0;
}

template <typename T> Array<T>::Array(unsigned int i)
{
	_arr = new T * (sizeof(T) * i);
	_size = i;
}

template <typename T> Array<T>::Array(const Array &src)
{
	for (unsigned int i = 0; i < src._size; i++)
	{
		try
		{
			this[i] = src[i];
		}
		catch (std::exception &e)
		{
			std::cout
				<< "Error: Array copy constructor: error using subscript operator:"
				<< e.what() << std::endl;
			return;
		}
	}
}

template <typename T> Array<T>::~Array(void)
{
	delete _arr;
	_arr = NULL;
	return;
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &rhs)
{

}

template <typename T> Array<T> &Array<T>::operator[](unsigned int idx)
{

}
