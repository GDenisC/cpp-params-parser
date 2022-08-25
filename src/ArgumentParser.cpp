#include "ArgumentParser.h"

ArgumentParser::ArgumentParser(char* argv[], int argc)
{
	for (size_t i = 0; i < argc; ++i) {
		this->args.push_back(std::string(argv[i]));
	}

	this->argc = argc;
}

int ArgumentParser::lenght() const
{
	return argc;
}

std::string ArgumentParser::operator[](size_t index)
{
	return args[index];
}

bool ArgumentParser::checkArg(std::string argname)
{
	for (size_t i = 0; i < this->argc; ++i)
	{
		if (this->args[i] == argname)
		{
			return true;
		}
	}

	return false;
}

std::string ArgumentParser::getArgInput(std::string argname)
{
	for (size_t i = 0; i < this->argc; ++i)
	{
		if (this->args[i] == argname)
		{
			if (this->argc > i + 1) {
				return this->args[i + 1];
			}
			else {
				return "";
			}
		}
	}

	return "";
}
