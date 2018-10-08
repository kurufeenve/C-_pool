#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	try
	{
		Bureaucrat	Bu = Bureaucrat("Hermes Conrad", 34);
		std::cout << Bu << std::endl;
	}
	catch(std::exception *e)
	{
		std::cout << e->what() << "too hot" << std::endl;
		delete e;
	}
	catch(...)
	{
		std::cout << "Unknown exception" << std::endl;
	}
	return (0);
}