#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeS;
		const unsigned int	_gradeExe;

	public:
		Form();
		Form(const std::string name, const unsigned int gradeS, const unsigned int gradeExe);
		Form(const Form &F);
		virtual ~Form();
		Form &operator=(Form const &F);
		const std::string	getName(void) const;
		bool				getSined(void) const;
		unsigned int	getGradeS(void) const;
		unsigned int	getGradeExe(void) const;
		void				beSigned(Bureaucrat Bu);

	class	GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			GradeTooHighException(const GradeTooHighException &ToHigh);
			virtual ~GradeTooHighException() throw();
			GradeTooHighException	&operator= (const GradeTooHighException &ToHigh);
			virtual const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			GradeTooLowException(const GradeTooLowException &ToHigh);
			virtual ~GradeTooLowException() throw();
			GradeTooLowException	&operator= (const GradeTooLowException &ToHigh);
			virtual const char *what() const throw();
	};

};

std::ostream	&operator<< (std::ostream &out, Form const &F);

#endif