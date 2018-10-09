#ifndef ROBOTOMYREQUESTFORM_CPP
# define ROBOTOMYREQUESTFORM_CPP

# include "Form.hpp"
# include <unistd.h>
# include <sys/time.h>

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &RRF);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &RRF);
		void	robotomy(void) const;
		virtual void		execute(const Bureaucrat &Exe) const;
};

#endif