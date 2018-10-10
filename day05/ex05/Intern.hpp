#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(const Intern &Int);
		virtual ~Intern();
		Intern &operator=(Intern const &Int);
		Form	*makeForm(const std::string name, const std::string target);
};

#endif