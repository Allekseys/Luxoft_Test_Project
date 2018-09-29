#include "stdafx.h"
#include <string>
#include <vector>

#ifndef CLASS_IPROCESSOR
#define CLASS_IPROCESSOR

class IProcessor
{
public:
	IProcessor();
	virtual ~IProcessor();

	/*
	* Processes the input wordVector and puts the result into text
	*/
	virtual void processText(const std::vector < std::string > & wordVector, std::string & text) = 0;
};

#endif