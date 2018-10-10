#include "OfficeBlock.hpp"

/*				Constructors/Destructors				*/

OfficeBlock::OfficeBlock() : _Int(NULL), _Signer(NULL), _Exe(NULL)
{
	return ;
}

OfficeBlock::OfficeBlock(Intern &Int, Bureaucrat &Signer, Bureaucrat &Exe) :
_Int(&Int), _Signer(&Signer), _Exe(&Exe)
{
	return ;
}

OfficeBlock::~OfficeBlock()
{
	return ;
}

/*					Seters/Geters						*/

void	OfficeBlock::setIntern(Intern &Int)
{
	this->_Int = &Int;
}

void		OfficeBlock::setSigner(Bureaucrat &Signer)
{
	this->_Signer = &Signer;
}

void		OfficeBlock::setExecutor(Bureaucrat &Exe)
{
	this->_Exe = &Exe;
}

Intern		*OfficeBlock::getIntern(void) const
{
	return this->_Int;
}

Bureaucrat	*OfficeBlock::getSigner(void) const
{
	return this->_Signer;
}

Bureaucrat	*OfficeBlock::getExecutor(void) const
{
	return this->_Exe;
}

/*						Exceptions						*/

OfficeBlock::InternNotAvailable::InternNotAvailable()
{
	return ;
}

OfficeBlock::InternNotAvailable::InternNotAvailable(const InternNotAvailable &Intern)
{
	*this = Intern;
}

OfficeBlock::InternNotAvailable::~InternNotAvailable()  throw()
{
	return ;
}

OfficeBlock::InternNotAvailable &OfficeBlock::InternNotAvailable::operator= (const InternNotAvailable &Intern)
{
	(void)Intern;
	return *this;
}

const char *OfficeBlock::InternNotAvailable::what() const throw()
{
	return ("ERROR: Intern is not available.");
}

OfficeBlock::SignerNotAvailable::SignerNotAvailable()
{
	return ;
}

OfficeBlock::SignerNotAvailable::SignerNotAvailable(const SignerNotAvailable &Signer)
{
	*this = Signer;
}

OfficeBlock::SignerNotAvailable::~SignerNotAvailable()  throw()
{
	return ;
}

OfficeBlock::SignerNotAvailable &OfficeBlock::SignerNotAvailable::operator= (const SignerNotAvailable &Signer)
{
	(void)Signer;
	return *this;
}

const char *OfficeBlock::SignerNotAvailable::what() const throw()
{
	return ("ERROR: Signer is not available.");
}

OfficeBlock::ExecutorNotAvailable::ExecutorNotAvailable()
{
	return ;
}

OfficeBlock::ExecutorNotAvailable::ExecutorNotAvailable(const ExecutorNotAvailable &Executor)
{
	*this = Executor;
}

OfficeBlock::ExecutorNotAvailable::~ExecutorNotAvailable()  throw()
{
	return ;
}

OfficeBlock::ExecutorNotAvailable &OfficeBlock::ExecutorNotAvailable::operator= (const ExecutorNotAvailable &Executor)
{
	(void)Executor;
	return *this;
}

const char *OfficeBlock::ExecutorNotAvailable::what() const throw()
{
	return ("ERROR: Executor is not available.");
}

OfficeBlock::UnknownFormName::UnknownFormName()
{
	return ;
}

OfficeBlock::UnknownFormName::UnknownFormName(const UnknownFormName &Executor)
{
	*this = Executor;
}

OfficeBlock::UnknownFormName::~UnknownFormName()  throw()
{
	return ;
}

OfficeBlock::UnknownFormName &OfficeBlock::UnknownFormName::operator= (const UnknownFormName &Executor)
{
	(void)Executor;
	return *this;
}

const char *OfficeBlock::UnknownFormName::what() const throw()
{
	return ("ERROR: Form name is unknown.");
}

OfficeBlock::TargetUnknown::TargetUnknown()
{
	return ;
}

OfficeBlock::TargetUnknown::TargetUnknown(const TargetUnknown &Executor)
{
	*this = Executor;
}

OfficeBlock::TargetUnknown::~TargetUnknown()  throw()
{
	return ;
}

OfficeBlock::TargetUnknown &OfficeBlock::TargetUnknown::operator= (const TargetUnknown &Executor)
{
	(void)Executor;
	return *this;
}

const char *OfficeBlock::TargetUnknown::what() const throw()
{
	return ("ERROR: Form name is unknown.");
}

/*					usefull methods						*/

const std::string	OfficeBlock::operationTime(void)
{
	time_t now = time(0);
    tm* localtm = localtime(&now);
    std::string data = asctime(localtm);
	
	return data;
}

void				OfficeBlock::doBureaucracy(std::string name, std::string target)
{
	Form	*Form;
	
	if (!this->_Int)
		throw new InternNotAvailable();
	if (!this->_Signer)
		throw new SignerNotAvailable();
	if (!this->_Exe)
		throw new ExecutorNotAvailable();
	if (target.length() == 0)
		throw new TargetUnknown();
	if (!(Form = this->_Int->makeForm(name, target)))
		throw new UnknownFormName();
	std::cout << this->operationTime() << "Intern creates form " << Form->getName()
	<< "\n"	<< std::endl;
	this->_Signer->signForm(Form);
	std::cout << this->operationTime() << "Bureaucrat: " << this->_Signer->getName()
	<< "\nGrade: " << this->_Signer->getGrade() << "\nSignes form " << Form->getName()
	<< "\n" << std::endl;
	this->_Exe->executeForm(Form);
	std::cout << this->operationTime() << "Bureaucrat: " << this->_Exe->getName()
	<< "\nGrade: " << this->_Exe->getGrade() << "\nWas performing execution of form " << Form->getName()
	<< "\n" << std::endl;
}
