#include "easyfind.hpp"
#include <vector>

int		main(void)
{
	int		*arr = new int[10]();
	std::vector<int> tmp;
	for (int i = 0; i < 10; i++)
	{
		tmp.push_back(i);
	}
	std::cout << easyfind(tmp, 12) << std::endl;
	return (0);
}
