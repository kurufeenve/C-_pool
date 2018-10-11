#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class	Array
{
	private:
		unsigned int	_length;
		T				*_arr;
	public:
		Array<T>() : _length(1), _arr(new T[0]()) {
			return ;
		}

		Array<T>(unsigned int l) : _length(l) {
			this->_arr = new T[l]();
		}

		Array<T>(const Array<T> &A) {
			this->_length = A.size();
			this->_arr = new T[this->_length]();
			for (unsigned int i = 0; i < this->_length; i++)
				this->_arr[i] = A._arr[i];
		}

		virtual ~Array() {
			if (this->_arr)
			{
				delete [] this->_arr;
			}
		}

		Array<T> &operator= (const Array<T> &A) {
			if (this->_arr)
			{
				delete [] this->_arr;
			}
			this->_length = A.size();
			this->_arr = new T[this->_length]();
			for (unsigned int i = 0; i < this->_length(); i++)
				this->_arr[i] = A._arr[i];
			return *this;
		}

		unsigned int	size(void) const {
			return this->_length;
		}

		T	&operator[] (unsigned int i) const
		{
			if (i >= this->_length)
				throw std::exception();
			return this->_arr[i];
		}
};

#endif
