#include "stdafx.h"
#include <cstdlib>
#include "CppUnitTest.h"
#include "../LuxoftProject/CFileHandler.h"
#include "../LuxoftProject/CProcessorA.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(ReadFromFile)
		{
			std::FILE *testfile = fopen("test1.txt","r+");
			std::string text = "random text for testing";
			fwrite(&text, sizeof(std::string), 1, testfile);
			std::vector <std::string> testVec;
			testVec.push_back("random text for testing");
			CFileHandler obj1;
			std::vector <std::string> wordVec1;
			obj1.readFromFile("testfile1.txt", wordVec1);
			Assert::AreEqual(wordVec1, testVec);
		}

		TEST_METHOD(WriteToFile)
		{

			//processText(const std::vector < std::string > & wordVector, std::string & text)
			
			Assert::IsTrue(obj1.readFromFile("testfile1.txt", wordVec1));
		}

	};
}