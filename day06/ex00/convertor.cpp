#include "convertor.hpp"

/*				Constructors/Destructors				*/

Converter::Converter()
{
	return ;
}

Converter::Converter(const Converter &C)
{
	*this = C;
}

Converter::~Converter()
{
	return ;
}

Converter &Converter::operator= (const Converter &C)
{
	if (this != &C)
	{

	}
	return *this;
}

/*					Seters/Geters						*/

void	Converter::setChar(char c)
{
	this->_char = c;
}

void	Converter::setInt(int n)
{
	this->_int = n;
}

void	Converter::setFloat(float f)
{
	this->_float = f;
}

void	Converter::setDouble(double d)
{
	this->_double = d;
}

char	Converter::getChar(void) const
{
	return this->_char;
}

int		Converter::getInt(void) const
{
	return this->_int;
}

float	Converter::getFloat(void) const
{
	return this->_float;
}

double	Converter::getDouble(void) const
{
	return this->_double;
}

/*					usefull methods						*/

void	Converter::convert(std::string S)
{
	std::cout << "char: ";
	try
	{
		this->_char = std::stoi(S, 0, 10);
		if (this->_char > 32 && this->_char < 127)
			std::cout << this->_char << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Impossible" << std::endl;
	}
	catch (...)
	{
		std::cout << "Impossible" << std::endl;
	}
	std::cout << "int: ";
	try
	{
		this->_int = std::stoi(S);
		std::cout << this->_int << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Impossible" << std::endl;
	}
	catch (...)
	{
		std::cout << "Impossible" << std::endl;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1);
	try
	{
			this->_float = std::stof(S);
			std::cout << this->_float << 'f' << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Impossible" << std::endl;
	}
	catch (...)
	{
		std::cout << "Impossible" << std::endl;
	}
	std::cout << "double: ";
	try
	{
		this->_double = std::stof(S);
		std::cout << this->_float << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Impossible" << std::endl;
	}
	catch (...)
	{
		std::cout << "Impossible" << std::endl;
	}
}
