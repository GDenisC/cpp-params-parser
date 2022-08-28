#pragma once
#include <string>
#include <vector>

class ArgumentParser
{
protected:
	int argc;
	std::vector<std::string> args;
public:
	ArgumentParser(char* argv[], int argc);

	int lenght() const;
	std::string operator[](size_t index);
	bool checkArg(std::string argname);
	std::string getArgInput(std::string argname);
};
