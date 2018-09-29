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
	IProcessor *createProcessor (const char * param);
}; 
