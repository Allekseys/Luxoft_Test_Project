#include "stdafx.h"
#include "CFileHandler.h"
#include <iterator>
#include <fstream>

CFileHandler::CFileHandler()
{

}

CFileHandler::~CFileHandler()
{

}

bool CFileHandler::readFromFile(const std::string & file, std::vector < std::string > & wordVector)
{
	bool result = true;
	std::ifstream fin(file);
	if (!fin)
	{
		result = false;
	}
	else
	{
		std::copy(std::istream_iterator < std::string >(fin),
			std::istream_iterator < std::string >(),
			std::inserter(wordVector, std::begin(wordVector)));
	}
	fin.close();
	return result;
}

bool CFileHandler::writeToFile(const std::string & file, const std::string & text)
{
	bool result = true;
	std::ofstream out(file);
	if (!out)
	{
		result = false;
	}
	else
	{
		out << text;
		out.close();
	}
	return result;
}