#include "Serializator.hpp"

int		main(void)
{
	Data	*data;
	Serializator	*S = new Serializator();

	data = S->deserealize(S->serialize());
	std::cout << data->s1 + "\n" << data->n << "\n" + data->s2 << std::endl;
	return (0);
}
