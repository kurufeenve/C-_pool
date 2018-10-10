#include "Serializator.hpp"

/*				Constructors/Destructors				*/

Serializator::Serializator()
{
	this->_data = new Data();
	return ;
}

Serializator::Serializator(const Serializator &S)
{
	*this = S;
}

Serializator	&Serializator::operator= (const Serializator &S)
{
	if (this != &S)
	{
		this->_data = S.getData();
		this->_raw = S.getRaw();
	}
	return *this;
}

Serializator::~Serializator()
{
	return ;
}

/*					Seters/Geters						*/

Data	*Serializator::getData(void) const
{
	return this->_data;
}

void	*Serializator::getRaw(void) const
{
	return this->_raw;
}

/*					usefull methods						*/

void	*Serializator::serialize(void)
{
	int			i = 0;
	int			k = 3;
	char		*res = new char[20];

	std::string	alphanumerical = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz1234567890";
	
	srand(clock());
	for (; i < 8; i++)
	{
		res[i] = alphanumerical[rand() % 62];
	}
	for (; i < 12; i++)
	{
		res[i] = rand() % 256 - 128;
		this->n.ch[k--] = static_cast<unsigned char>(res[i]);
	}
	for (; i < 20; i++)
	{
		res[i] = alphanumerical[rand() % 62];
	}
	return res;
}

Data	*Serializator::deserealize(void *raw)
{
	int			i = 0;
	char		*dat;

	dat = reinterpret_cast<char*>(raw);
	Data		*data = new Data();

	for (; i < 8; i++)
	{
		data->s1.push_back(dat[i]);
	}
	data->n = this->n.num;
	for (i = 12; i < 20; i++)
	{
		data->s2.push_back(dat[i]);
	}
	return data;
}
