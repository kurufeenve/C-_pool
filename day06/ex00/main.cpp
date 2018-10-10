#include <iostream>
#include "convertor.hpp"

int		main(int argc, char **argv)
{
	Converter	*Conv = new Converter();
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		exit(0);
	}
	Conv->convert(argv[1]);
	return (0);
}