#include <iostream>

template <typename T> void ft_swap(T &a, T &b)
{
	T	buf;

	buf = a;
	a = b;
	b = buf;
}

template <typename X> void iter(X *arr, size_t length, void (*foo)(X &, X &))
{
	for (size_t i = 0; i < length - 1; i++)
	{
		(*foo)(arr[i], arr[i + 1]);
	}
}

int		main(void)
{
	int		arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	iter(arr, 10, &ft_swap);
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	return (0);
}
