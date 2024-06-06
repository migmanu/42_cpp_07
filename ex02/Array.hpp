/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:03:26 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/05/17 14:19:17 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> class Array
{
  public:
	Array(void);
	Array(unsigned int i);
	Array(const Array &src);
	~Array(void);

	Array &operator=(const Array &rhs);
	T &operator[](unsigned int idx);

	unsigned int size(void) const;
	void print(void) const;

  private:
	T *_arr;
	unsigned int _size;
};

template <typename T> Array<T>::Array(void) : _size(0)
{
	_arr = new T[_size];
	return;
}

template <typename T> Array<T>::Array(unsigned int i) : _size(i)
{
	_arr = new T[_size];
	return;
}

template <typename T> Array<T>::Array(const Array &src)
{
	this = src;
	return;
}

template <typename T> Array<T>::~Array(void)
{
	delete _arr;
	_arr = NULL;
	return;
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_arr = new T[_size];
		for (unsigned int i = 0; i < rhs._size; i++)
		{
			this->_arr[i] = rhs._arr[i];
		}
	}
}

template <typename T> T &Array<T>::operator[](unsigned int idx)
{
	if (idx >= _size)
		throw std::out_of_range("Index out of range");

	return _arr[idx];
}

template <typename T> unsigned int Array<T>::size(void) const
{
	return this->_size;
}

template <typename T> void Array<T>::print(void) const
{
	for (unsigned int i = 0; i < this->_size; i++)
	{
		std::cout << _arr[i] << " ";
	}
	return;
}
