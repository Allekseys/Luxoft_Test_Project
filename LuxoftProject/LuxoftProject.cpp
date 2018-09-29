// LuxoftProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <iterator>
#include <fstream>
#include "CProcessorFactory.h"
#include "CFileHandler.h"

const std::string INPUT_FILENAME = "example.txt";
const std::string OUTPUT_FILENAME = "example_out.txt";

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Error: found %d arguments. Needs exactly 1\n", argc - 1);
		return -1;
	}

	std::vector < std::string > vec;
	CFileHandler fileHandler;
	bool readResult = fileHandler.readFromFile(INPUT_FILENAME, vec);
	if (!readResult)
	{
		std::cerr << INPUT_FILENAME.c_str() << " could not be opened for reading!" << std::endl;
	}
	else
	{
		CProcessorFactory factory;
		IProcessor *processor = factory.createProcessor(argv[1]);
		if (nullptr != processor)
		{
			std::string text = "";
			processor->processText(vec, text);
			fileHandler.writeToFile(OUTPUT_FILENAME, text);
		}
		else
		{
			std::cerr << "Invalid argument was entered.\nMust be entered \"A\",\"B\" or \"C\"" << std::endl;
		}
		delete processor;
	}
	return 0;
}