#include "stdafx.h"
#include "CProcessorC.h"
#include <iterator>
#include <iostream>
#include <algorithm>

CProcessorC::CProcessorC()
	: IProcessor()
{

}

CProcessorC::~CProcessorC()
{

}

void CProcessorC::processText(const std::vector < std::string > & wordVector, std::string & text)
{
	char letter;
	std::cout << "Enter your letter: ";
	std::cin >> letter;
	long long count = 0;
	for (std::vector <std::string>::const_iterator iter = wordVector.begin(); iter != wordVector.end(); ++iter) {
		for (size_t pos = 0; pos < (*iter).length(); pos++) {
			pos = (*iter).find(letter, pos);
			if (pos != std::string::npos)
				++count;
			else
				break;
		}
	}
	text += "Number of letters \"";
	text += letter;
	text += "\" is ";
	text += std::to_string(count);
}