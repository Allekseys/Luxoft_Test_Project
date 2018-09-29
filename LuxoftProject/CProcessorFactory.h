#include "stdafx.h"
#include <string>
#include "IProcessor.h"

class CProcessorFactory
{
public:
	CProcessorFactory();
	~CProcessorFactory();

	/*
	* Creates a needed processor for the given param
	*/
	std::unique_ptr<IProcessor> createProcessor(const char * param);
}; 
