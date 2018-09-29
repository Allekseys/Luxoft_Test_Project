#include <string>
#include <vector>

class CFileHandler
{
public:
	CFileHandler();
	~CFileHandler();

	/*
	* Read from file to vector
	*/
	bool readFromFile(const std::string & file, std::vector < std::string > & wordVector);

	/*
	* Writes text into file
	*/
	bool writeToFile(const std::string & file, const std::string & text);
}; 
