#include "stdafx.h"
#include <iterator>
#include <fstream>
#include "CProcessorFactory.h"
#include "CProcessorA.h"
#include "CProcessorB.h"
#include "CProcessorC.h"

CProcessorFactory::CProcessorFactory()
{

}

CProcessorFactory::~CProcessorFactory()
{

}

IProcessor *CProcessorFactory::createProcessor(const char * param)
{
	switch (*param)
	{
	case 'A':
		return new CProcessorA();
	case 'B':
		return new CProcessorB();
	case 'C':
		return new CProcessorC();
	default:
		return nullptr;
	}
}