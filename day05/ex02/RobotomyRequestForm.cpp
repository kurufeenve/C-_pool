#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45, "")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &RRF)
{
	*this = RRF;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form ("RobotomyRequest", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &F)
{
	if (this != &F)
	{
		this->setSigned(F.getSined());
	}
	return *this;
}

void		RobotomyRequestForm::execute(const Bureaucrat &Exe) const
{
	if (this->getSined() && (Exe.getGrade() >= 1 && Exe.getGrade() <= this->getGradeExe()))
		this->robotomy();
	else
		throw new GradeTooLowException::GradeTooLowException();
}

void	RobotomyRequestForm::robotomy(void) const
{
	struct timeval	times;

	system("afplay Drill.mp3 &");
	usleep(12000000);
	gettimeofday(&times,NULL);
	srand((times.tv_sec) + (times.tv_usec));
	std::cout << this->getTarget() << " has been robotomized: " <<
	((rand() % 2) ? "success." : "failure.") << std::endl;
}
