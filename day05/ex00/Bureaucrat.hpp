#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &Bu);
		virtual ~Bureaucrat(void);
		Bureaucrat			&operator= (const Bureaucrat &Bu);
		const std::string	getName(void) const;
		unsigned int		getGrade(void) const;
		void				increment(void);
		void				decrement(void);
	
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

std::ostream	&operator<< (std::ostream &out, Bureaucrat const &Bu);

#endif