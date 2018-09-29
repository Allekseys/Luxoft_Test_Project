#include "IProcessor.h"

class CProcessorA : public IProcessor
{
public:
	CProcessorA();
	~CProcessorA();

	/*
	* Main task
	*/
	void processText(const std::vector < std::string > & wordVector, std::string & text) override;
};
