#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
	this->_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade > 150)
		throw new GradeTooLowException::GradeTooLowException();
	else if (grade < 1)
		throw new GradeTooHighException::GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bu)
{
	*this = Bu;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat	&Bureaucrat::operator= (const Bureaucrat &Bu)
{
	if (this != &Bu)
	{
		this->_grade = Bu.getGrade();
	}
	return *this;
}

const std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned int		Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void				Bureaucrat::increment(void)
{
	if (this->getGrade() - 1 >= 1)
		this->_grade--;
	else
		throw new GradeTooHighException::GradeTooHighException();
}

void				Bureaucrat::decrement(void)
{
	if (this->getGrade() + 1 <= 150)
		this->_grade++;
	else
		throw new GradeTooLowException::GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &ToHigh)
{
	*this = ToHigh;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &ToHigh)
{
	(void)ToHigh;
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR: Cheating detected. You will be contained in the Bureaucratic jail for 150 years.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &ToLow)
{
	*this = ToLow;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &ToLow)
{
	(void)ToLow;
	return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR: Cheating detected. You will be contained in the Bureaucratic jail for 150 years.");
}

std::ostream	&operator<< (std::ostream &out, Bureaucrat const &Bu)
{
	out << Bu.getName() << ", bureaucrat grade " << Bu.getGrade() << ".";
	return out;
}

void	Bureaucrat::signForm(Form &F) const
{
	try
	{
		F.beSigned(*this);
		std::cout << this->getName() << " signs " << F.getName() << std::endl;;
	}
	catch(std::exception *e)
	{
		std::cout << this->getName() << " cannot sign " << F.getName()
		<< "\nReason: " << e->what() << std::endl;
	}
	catch(...)
	{
		std::cout << "Unknown exception" << std::endl;
	}
}
