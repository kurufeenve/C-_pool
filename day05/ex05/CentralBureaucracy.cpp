#include "CentralBureaucracy.hpp"

/*				Constructors/Destructors				*/

CentralBureaucracy::CentralBureaucracy()
{
	for (int i = 0; i < 20; i++)
	{
		Intern	*Int = new Intern();

		this->_Office[i] = new OfficeBlock();
		this->_Office[i]->setIntern(*Int);
	}
	return ;
}

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy &CB)
{
	*this = CB;
}

CentralBureaucracy::~CentralBureaucracy()
{
	return ;
}

CentralBureaucracy	&CentralBureaucracy::operator= (const CentralBureaucracy &CB)
{
	for (int i = 0; i < 20; i++)
	{
		this->_Office[i] = CB._Office[i]; //hz
	}
}

/*					Seters/Geters						*/

void				CentralBureaucracy::setBureaucrat(Bureaucrat *Bu)
{
	if (Bu->getGrade > 145)
	{
		std::cout << "You grade is too low." << std::endl;
		return ;
	}
	for (int i = 0; i < 20; i++)
	{
		if (Bu->getGrade <= 145 && !this->_Office[i]->getSigner())
		{
			this->_Office[i]->setSigner(*Bu);
			break ;
		}
		else if (this->_Office[i]->getSigner() && Bu->getGrade - 5 <= this->_Office[i]->getSigner()->getGrade())
		{
			this->_Office[i]->setExecutor(*Bu);
			break ;
		}
		else
			std::cout << "There are no suitable seats for you. Please, try again later." << std::endl;
	}
}
