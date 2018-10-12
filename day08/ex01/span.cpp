#include "span.hpp"

Span::Span() : N(0)
{
	this->V.reserve(0);
	return ;
}

Span::Span(unsigned int N) : N(N)
{
	this->V.reserve(N);
	return ;
}

Span::Span(Span const &S)
{
	*this = S;
}

Span &Span::operator= (Span const &S)
{
	this->N = S.N;
	this->V = S.V;
	return *this;
}

void	Span::addNumber(int n)
{
	try
	{
		if (this->V.size() != this->N)
		{
			this->V.push_back(n);
		}
		else
		{
			throw std::logic_error("\nERROR: EXCEEDED CAPACITY\n\n");
		}
	}
	catch (std::logic_error e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Span::addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
	try
	{
		if (this->N >= this->V.size() + std::distance(beg, end))
		{
			for (; beg != end; beg++)
			{
				this->V.push_back(*beg);
			}
		}
		else
		{
			throw std::logic_error("\nERROR: EXCEEDED CAPACITY\n\n");
		}
	}
	catch (std::logic_error e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		Span::shortestSpan(void)
{
	int					shortest, buff;
	std::vector<int>	tmp;

	try
	{
		if (N <= 1)
		{
			throw std::logic_error("\nERROR: 1 or less members. Return -1.\n\n");
		}
		tmp = this->V;
		shortest = this->longestSpan();
		buff = shortest;
		std::sort(tmp.begin(), tmp.end());
		for (unsigned int i = 0; i < N - 1; i++)
		{
			buff = V[i + 1] - V[i];
			if (buff < shortest)
			{
				shortest = buff;
			}
		}
		return shortest;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return -1;
	}
}

int		Span::longestSpan(void)
{
	try
	{
		if (N <= 1)
		{
			throw std::logic_error("\nERROR: 1 or less members. Return -1.\n\n");
		}
		return(*std::max_element(V.begin(), V.end()) - *std::min_element(V.begin(), V.end()));
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return -1;
	}
}

Span::~Span()
{
	return ;
}
