#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
	{
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B*>(&p))
	{
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C*>(&p))
	{
		std::cout << "C" << std::endl;
	}
}

Base * generate(void)
{
	Base	*Ba[3] = {new A(), new B(), new C()};

	srand(clock());
	
	return Ba[rand() % 3];
}

int		main(void)
{
	Base	*Ba = generate();

	identify_from_pointer(Ba);
	identify_from_reference(*Ba);
	return (0);
}
