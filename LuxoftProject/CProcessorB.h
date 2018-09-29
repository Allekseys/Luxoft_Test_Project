#include "IProcessor.h"

class CProcessorB : public IProcessor
{
public:
	CProcessorB();
	~CProcessorB();

	/*
	* Task B
	*/
	void processText(const std::vector < std::string > & wordVector, std::string & text) override;
};