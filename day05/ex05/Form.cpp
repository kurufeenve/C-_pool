#include "Form.hpp"

Form::Form() : _gradeS(35), _gradeExe(35)
{
	this->_signed = false;
	return ;
}

Form::Form(const Form &F) : _gradeS(F._gradeS), _gradeExe(F._gradeExe)
{
	*this = F;
}

Form::Form(const std::string name, const unsigned int gradeS, const unsigned int gradeExe, std::string target) :
_name(name), _gradeS(gradeS), _gradeExe(gradeExe), _target(target)
{
	this->_signed = 0;
	if (gradeS > 150)
		throw new GradeTooLowException::GradeTooLowException();
	else if (gradeS < 1)
		throw new GradeTooHighException::GradeTooHighException();
	if (gradeExe > 150)
		throw new GradeTooLowException::GradeTooLowException();
	else if (gradeExe < 1)
		throw new GradeTooHighException::GradeTooHighException();

	return ;
}

Form::~Form()
{
	return ;
}

Form &Form::operator=(Form const &F)
{
	if (this != &F)
	{
		this->_signed = F.getSined();
	}
	return *this;
}

const std::string	Form::getName(void) const
{
	return this->_name;
}

bool				Form::getSined(void) const
{
	return this->_signed;
}

unsigned int	Form::getGradeS(void) const
{
	return this->_gradeS;
}

unsigned int	Form::getGradeExe(void) const
{
	return this->_gradeExe;
}

Form::GradeTooHighException::GradeTooHighException()
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &ToHigh)
{
	*this = ToHigh;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

Form::GradeTooHighException	&Form::GradeTooHighException::operator= (const GradeTooHighException &ToHigh)
{
	(void)ToHigh;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("ERROR: Cheating detected. You will be contained in the Bureaucratic jail for 150 years.");
}

Form::GradeTooLowException::GradeTooLowException()
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &ToLow)
{
	*this = ToLow;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

Form::GradeTooLowException	&Form::GradeTooLowException::operator= (const GradeTooLowException &ToLow)
{
	(void)ToLow;
	return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream	&operator<< (std::ostream &out, Form const &F)
{
	out << F.getName() << ", is sined?" << F.getSined() << "\nSigning bureaucrat level "
	<< F.getGradeS() << ".\nExecuting bureaucrat level " << F.getGradeExe();
	return out;
}

void	Form::beSigned(const Bureaucrat Bu)
{
	if (Bu.getGrade() <= this->_gradeS)
		this->_signed = true;
	else
		throw new GradeTooLowException::GradeTooLowException();
}

void			Form::setSigned(bool sign)
{
	this->_signed = sign;
}

const std::string	Form::getTarget(void) const
{
	return this->_target;
}

void				Form::setTarget(const std::string target)
{
	this->_target = target;
}
