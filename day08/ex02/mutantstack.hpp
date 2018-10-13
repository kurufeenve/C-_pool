#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <list>
# include <iterator>
# include <exception>
# include <stack>
# include <iostream>

template <class T>
class	MutantStack : public std::stack<T>
{
	private:
		std::list<T>	*_StackLst;

	public:
		typedef std::list<int>::iterator iterator;
		MutantStack()
		{
			this->_StackLst = new std::list<T>();
			return ;
		}
		MutantStack(MutantStack const &Mutant)
		{
			*this = Mutant;
		}
		MutantStack	&operator= (MutantStack const &Mutant)
		{
			this->_StackLst = Mutant._StackLst;
			return *this;
		}
		virtual ~MutantStack()
		{
			delete this->_StackLst;
			return ;
		}
		void			push(T val)
		{
			this->_StackLst->push_front(val);
		}
		bool			empty() const
		{
			return this->_StackLst->empty();
		}
		unsigned int	size() const
		{
			return this->_StackLst->size();
		}
		T				top() const
		{
			return this->_StackLst->front();
		}
		void			pop()
		{
			try
			{
				if (this->_StackLst->empty())
					throw std::logic_error("stack is empty");
				this->_StackLst->pop_front();
			}
			catch (std::logic_error e)
			{
				std::cout << e << std::endl;
			}

		}
		iterator	begin() const
		{
			return this->_StackLst->begin();
		}
		iterator	end() const
		{
			return this->_StackLst->end();
		}
};

#endif