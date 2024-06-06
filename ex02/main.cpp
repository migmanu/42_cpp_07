#include "Array.hpp"
#include <exception>
#include <iostream>

int main(void)
{
	std::cout << std::endl << "INTEGERS" << std::endl;
	unsigned int i = 3;
	Array<int> a(i);
	a.print();
	std::cout << "test out range: " << std::endl;
	try
	{
		a[3] = 1;
		a.print();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << "STRINGS" << std::endl;




	return 0;
}
