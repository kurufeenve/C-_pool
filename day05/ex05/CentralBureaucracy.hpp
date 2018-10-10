#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include "OfficeBlock.hpp"

class	CentralBureaucracy
{
	private:
		OfficeBlock	*_Office[20];

	public:
							CentralBureaucracy();
							CentralBureaucracy(const CentralBureaucracy &CB);
							virtual ~CentralBureaucracy();
		CentralBureaucracy	&operator= (const CentralBureaucracy &CB);
		
		void				setBureaucrat(Bureaucrat *Bu);
};

#endif