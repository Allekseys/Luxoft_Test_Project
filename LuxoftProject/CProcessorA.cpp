#include "stdafx.h"
#include "CProcessorA.h"
#include <iterator>
#include "stdafx.h"
#include <map>
#include <algorithm>

CProcessorA::CProcessorA()
	: IProcessor()
{

}

CProcessorA::~CProcessorA()
{

}

void CProcessorA::processText(const std::vector < std::string > & wordVector, std::string & text)
{
	std::map < std::string, int > words;
	std::for_each(
		std::begin(wordVector),
		std::end(wordVector),
		[&](const std::string &s)
	{
		words[s]++;
	});
	std::for_each(std::begin(words),
		std::end(words),
		[&](std::pair < std::string, int > p)
	{
		if (p.second == 1)
		{
			text.append(p.first);
			text.append(" ");
		}
	});
}