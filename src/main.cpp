
#include <stdio.h>
#include "ArgumentParser.h"

int main(int argc, char* argv[])
{
	auto argparse = new ArgumentParser(argv, argc);

	bool testa = argparse->checkArg("--test");
	auto test = argparse->getArgInput("--test");

	if (test != "" && testa) {
		printf("%s\n", test.c_str());
	}
	else {
		printf("param (--text) not found.\n");
	}

	delete argparse;

	system("pause");
}
