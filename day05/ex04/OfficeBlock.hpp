#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"

class	OfficeBlock
{
	private:
		Intern				*_Int;
		Bureaucrat			*_Signer;
		Bureaucrat			*_Exe;
	
	public:
							OfficeBlock();
							OfficeBlock(Intern &Int, Bureaucrat &Signer, Bureaucrat &Exe);
							virtual ~OfficeBlock();

		void				setIntern(Intern &Int);
		void				setSigner(Bureaucrat &Signer);
		void				setExecutor(Bureaucrat &Exe);

		Intern				*getIntern(void) const;
		Bureaucrat			*getSigner(void) const;
		Bureaucrat			*getExecutor(void) const;

		void				doBureaucracy(std::string name, std::string target);
		const std::string	operationTime(void);

		class				InternNotAvailable : public std::exception
		{
			public:
									InternNotAvailable();
									InternNotAvailable(const InternNotAvailable &Intern);
									virtual ~InternNotAvailable()  throw();
				InternNotAvailable	&operator= (const InternNotAvailable &Intern);
				virtual const char	*what() const throw();
		};

		class				SignerNotAvailable : public std::exception
		{
			public:
									SignerNotAvailable();
									SignerNotAvailable(const SignerNotAvailable &Signer);
									virtual ~SignerNotAvailable()  throw();
				SignerNotAvailable	&operator= (const SignerNotAvailable &Signer);
				virtual const char	*what() const throw();
		};

		class				ExecutorNotAvailable : public std::exception
		{
			public:
										ExecutorNotAvailable();
										ExecutorNotAvailable(const ExecutorNotAvailable &Executor);
										virtual ~ExecutorNotAvailable() throw();
				ExecutorNotAvailable	&operator= (const ExecutorNotAvailable &Executor);
				virtual const char		*what() const throw();
		};

		class				UnknownFormName : public std::exception
		{
			public:
									UnknownFormName();
									UnknownFormName(const UnknownFormName &Executor);
									virtual ~UnknownFormName() throw();
				UnknownFormName		&operator= (const UnknownFormName &Form);
				virtual const char	*what() const throw();
		};

		class				TargetUnknown : public std::exception
		{
			public:
									TargetUnknown();
									TargetUnknown(const TargetUnknown &Executor);
									virtual ~TargetUnknown() throw();
				TargetUnknown		&operator= (const TargetUnknown &Form);
				virtual const char	*what() const throw();
		};
};

#endif