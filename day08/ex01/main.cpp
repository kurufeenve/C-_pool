#include "span.hpp"

int		main(void)
{
	Span	*S = new Span(100000);
	std::vector<int> vec;
	for (int i = 0; i < 100000; i++)
	{
		vec.push_back(i);
	}
	S->addNumber(vec.begin(), vec.end());
	
	// S->addNumber(1);
	return (0);
}