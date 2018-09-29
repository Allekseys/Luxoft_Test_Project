#include "stdafx.h"
#include "CProcessorB.h"
#include <iterator>
#include <map>
#include <algorithm>

CProcessorB::CProcessorB()
	: IProcessor()
{

}

CProcessorB::~CProcessorB()
{

}

void CProcessorB::processText(const std::vector < std::string > & wordVector, std::string & text)
{
	std::vector<std::string >::const_iterator iter = wordVector.begin();
	for (int cnt = 1; iter != wordVector.end(); ++iter, ++cnt) {
		if (*iter != " ")
			text.append(*iter);
	}
}