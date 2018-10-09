#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(const Intern &Int)
{
	*this = Int;
}

Intern::~Intern()
{
	return ;
}

Intern &Intern::operator=(Intern const &Int)
{
	(void)Int;
	return *this;
}

Form	*Intern::makeForm(const std::string name, const std::string target)
{
	if (name == "ShrubberyCreationForm")
		return new ShrubberyCreationForm(target);
	else if (name == "RobotomyRequestForm")
		return new RobotomyRequestForm(target);
	else
		return new PresidentialPardonForm(target);
}
