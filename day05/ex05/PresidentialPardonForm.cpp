#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5, "")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &RRF)
{
	*this = RRF;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form ("PresidentialPardon", 25, 5, target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &F)
{
	if (this != &F)
	{
		this->setSigned(F.getSined());
	}
	return *this;
}

void		PresidentialPardonForm::execute(const Bureaucrat &Exe) const
{
	if (this->getSined() && (Exe.getGrade() >= 1 && Exe.getGrade() <= this->getGradeExe()))
		this->pardon();
	else
		throw new GradeTooLowException::GradeTooLowException();
}

void	PresidentialPardonForm::pardon(void) const
{
	std::cout << this->getTarget() << "  has been pardoned by Zaphod Beeblebrox.\n" << std::endl;
}
