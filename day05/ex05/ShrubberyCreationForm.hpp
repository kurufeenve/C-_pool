#ifndef SHRUBBERYCREATIONFORM_CPP
# define SHRUBBERYCREATIONFORM_CPP

# include "Form.hpp"
# include <fstream>

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &RRF);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &RRF);
		void	create(void) const;
		virtual void		execute(const Bureaucrat &Exe) const;
};

#endif