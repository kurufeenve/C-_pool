#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class	Converter
{
	private:
		char	_char;
		int		_int;
		float	_float;
		double	_double;

	public:
		Converter();
		Converter(const Converter &C);
		~Converter();
		Converter &operator= (const Converter &C);
		void	convert(std::string S);

		void	setChar(char c);
		void	setInt(int n);
		void	setFloat(float f);
		void	setDouble(double d);
		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;
};

#endif