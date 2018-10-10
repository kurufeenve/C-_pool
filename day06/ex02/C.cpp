#include "C.hpp"

C::C()
{
	return ;
}

C::C(const C &c)
{
    *this = c;
    return ;
}

C::~C(void)
{
    return ;
}

C	&C::operator= (const C &c)
{
    static_cast<void>(c);
    return (*this);
}
