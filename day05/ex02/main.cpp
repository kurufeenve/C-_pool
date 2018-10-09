#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int		main(void)
{
	ShrubberyCreationForm	*S = new ShrubberyCreationForm("home");
	RobotomyRequestForm		*R = new RobotomyRequestForm("Bender");
	PresidentialPardonForm	*P = new PresidentialPardonForm("Fry");
	Bureaucrat	*Bu1 = new Bureaucrat("Burocrat1", 145);
	Bureaucrat	*Bu2 = new Bureaucrat("Burocrat2", 137);
	Bureaucrat	*Bu3 = new Bureaucrat("Burocrat3", 72);
	Bureaucrat	*Bu4 = new Bureaucrat("Burocrat4", 45);
	Bureaucrat	*Bu5 = new Bureaucrat("Burocrat5", 25);
	Bureaucrat	*Bu6 = new Bureaucrat("Burocrat6", 5);
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
	Bu1->signForm(*S);
	Bu2->executeForm(*S);
	Bu3->signForm(*R);
	Bu4->executeForm(*R);
	Bu5->signForm(*P);
	Bu6->executeForm(*P);
	return (0);
}