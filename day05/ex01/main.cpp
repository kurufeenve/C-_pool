#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int		main(void)
{
	Form *form = new Form("form1", 35, 35);
	Bureaucrat	*Bu1 = new Bureaucrat("Burocrat1", 32);
	Bureaucrat	*Bu2 = new Bureaucrat("Burocrat2", 60);
	try
	{
		Bureaucrat	Bu = Bureaucrat("Hermes Conrad", 34);
		std::cout << Bu << std::endl;
	}
	catch(std::exception *e)
	{
		std::cout << e->what() << std::endl;
		delete e;
	}
	catch(...)
	{
		std::cout << "Unknown exception" << std::endl;
	}
	Bu1->signForm(*form);
	Bu2->signForm(*form);
	return (0);
}