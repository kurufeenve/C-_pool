
// Can try to use logger from day01 ex09 :)

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

int		main(void)
{
	// Intern					intern;
	// Form					*form;
	// // ShrubberyCreationForm	*S = new ShrubberyCreationForm("home");
	// // RobotomyRequestForm		*R = new RobotomyRequestForm("Bender");
	// // PresidentialPardonForm	*P = new PresidentialPardonForm("Fry");
	// Bureaucrat				*Bu1 = new Bureaucrat("Burocrat1", 145);
	// Bureaucrat				*Bu2 = new Bureaucrat("Burocrat2", 137);
	// Bureaucrat				*Bu3 = new Bureaucrat("Burocrat3", 72);
	// Bureaucrat				*Bu4 = new Bureaucrat("Burocrat4", 45);
	Intern					*intern = new Intern();
	Bureaucrat				*Bu5 = new Bureaucrat("Burocrat5", 25);
	Bureaucrat				*Bu6 = new Bureaucrat("Burocrat6", 5);
	OfficeBlock				*Office = new OfficeBlock(*intern, *Bu6, *Bu5);
	// try
	// {
	// 	Bureaucrat	Bu = Bureaucrat("Hermes Conrad", 34);
	// 	std::cout << Bu << std::endl;
	// }
	// catch(std::exception *e)
	// {
	// 	std::cout << e->what() << std::endl;
	// 	delete e;
	// }
	// catch(...)
	// {
	// 	std::cout << "Unknown exception" << std::endl;
	// }
	// form = intern.makeForm("ShrubberyCreationForm", "home");
	// Bu1->signForm(form);
	// Bu2->executeForm(form);
	// form = intern.makeForm("RobotomyRequestForm", "Bender");
	// Bu3->signForm(form);
	// Bu4->executeForm(form);
	// form = intern.makeForm("PresidentialPardonForm", "Fry");
	// Bu5->signForm(form);
	// Bu6->executeForm(form);
	Office->doBureaucracy("RobotomyRequestForm", "Bender");
	return (0);
}