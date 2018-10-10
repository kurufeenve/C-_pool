#ifndef PRESIDENTIALPARDONFORM_CPP
# define PRESIDENTIALPARDONFORM_CPP

# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &RRF);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &RRF);
		void	pardon(void) const;
		virtual void		execute(const Bureaucrat &Exe) const;
};

#endif