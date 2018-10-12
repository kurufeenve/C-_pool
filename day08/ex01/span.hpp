#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <numeric>
# include <iostream>

class	Span
{
	private:
		unsigned int		N;
		std::vector<int>	V;	

	public:
				Span();
				Span(unsigned int N);
				Span(Span const &S);
		Span 	&operator= (Span const &S);
				virtual ~Span();
		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif