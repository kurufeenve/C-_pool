#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template<class T>
int easyfind(T &t, int i)
{
	typename T::iterator		imperator = std::find(t.begin(), t.end(), i);
	if (imperator != t.end())
		return *imperator;
	return -1;
}

#endif