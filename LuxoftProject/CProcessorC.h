#include "IProcessor.h"

class CProcessorC : public IProcessor
{
public:
	CProcessorC();
	~CProcessorC();

	/*
	* Task C
	*/
	void processText(const std::vector < std::string > & wordVector, std::string & text) override;
};