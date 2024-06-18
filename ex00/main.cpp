/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:49:59 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/06/18 14:13:10 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <cstdlib>
#include <iostream>
#include <ostream>

class Awesome
{
  public:
	Awesome(void) : _n(0)
	{
	}
	Awesome(int n) : _n(n)
	{
	}
	Awesome &operator=(Awesome &a)
	{
		_n = a._n;
		return *this;
	}
	bool operator==(Awesome const &rhs) const
	{
		return (this->_n == rhs._n);
	}
	bool operator!=(Awesome const &rhs) const
	{
		return (this->_n != rhs._n);
	}
	bool operator>(Awesome const &rhs) const
	{
		return (this->_n > rhs._n);
	}
	bool operator<(Awesome const &rhs) const
	{
		return (this->_n < rhs._n);
	}
	bool operator>=(Awesome const &rhs) const
	{
		return (this->_n >= rhs._n);
	}
	bool operator<=(Awesome const &rhs) const
	{
		return (this->_n <= rhs._n);
	}
	int get_n(void) const
	{
		return _n;
	}

  private:
	int _n;
};
std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
	o << a.get_n();
	return o;
}

int main(void)
{
	{
		// MY TESTS
		int a = 2;
		int b = 3;
		swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	{
		// 42 TESTS
		Awesome a(2), b(4);

		swap(a, b);
		std::cout << "a: " << a << " b: " << b << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}
	return EXIT_SUCCESS;
}
