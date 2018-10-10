#include "A.hpp"

A::A()
{
	return ;
}

A::A(const A &a)
{
    *this = a;
    return ;
}

A::~A(void)
{
    return ;
}

A	&A::operator= (const A &a)
{
    static_cast<void>(a);
    return (*this);
}
