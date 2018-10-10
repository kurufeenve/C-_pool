#ifndef SERIALIZATOR_HPP
# define SERIALIZATOR_HPP

# include <iostream>

typedef struct			Data
{
	std::string			s1;
	int					n;
	std::string			s2;
}						Data;

typedef	union			number
{
	int					num;
	unsigned char		ch[4];
}						number;

class	Serializator
{
	private:
		Data	*_data;
		void	*_raw;
		number	n;

	public:
		Serializator();
		Serializator(const Serializator &S);
		Serializator	&operator= (const Serializator &S);
		~Serializator();
		Data	*getData(void) const;
		void	*getRaw(void) const;
		void	*serialize(void);
		Data	*deserealize(void *raw);
};

#endif
