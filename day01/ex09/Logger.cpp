#include "Logger.hpp"

Logger::Logger(std::string name) : Name(name){}

void		Logger::logToConsole(std::string msg)
{
	std::cout << msg << std::endl;
}

void		Logger::logToFile(std::string msg)
{
	std::ofstream LogFile;
	
	LogFile.open(this->Name, std::ofstream::out | std::ofstream::app);
	LogFile << msg;
	LogFile.close();
}

std::string	Logger::makeLogEntry(std::string msg)
{
	time_t		tt;
	std::string	res;
	std::string	two_dot;

	std::chrono::system_clock::time_point today = std::chrono::system_clock::now();
	tt = std::chrono::system_clock::to_time_t(today);
	res = "log: ";
	two_dot = ": ";
	res += ctime(&tt) + two_dot + msg;
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	void		(Logger::*logg[2])(std::string msg) = {&Logger::logToConsole, &Logger::logToFile};
	std::string	command[] = {"console", "file", "Console", "File"};

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			
	}
}
