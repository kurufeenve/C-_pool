#include "B.hpp"

B::B()
{
	return ;
}

B::B(const B &b)
{
    *this = b;
    return ;
}

B::~B(void)
{
    return ;
}

B	&B::operator= (const B &b)
{
    static_cast<void>(b);
    return (*this);
}
