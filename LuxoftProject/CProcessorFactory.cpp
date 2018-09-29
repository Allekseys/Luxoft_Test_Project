#include "stdafx.h"
#include <iterator>
#include <fstream>
#include <memory>
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

std::unique_ptr<IProcessor> CProcessorFactory::createProcessor(const char * param)
{
	switch (*param)
	{
	case 'A':
		return std::unique_ptr<IProcessor>(new CProcessorA());
	case 'B':
		return std::unique_ptr<IProcessor>(new CProcessorB());
	case 'C':
		return std::unique_ptr<IProcessor>(new CProcessorC());
	default:
		return nullptr;
	}
}