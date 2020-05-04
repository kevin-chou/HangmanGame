#ifndef HM_LIBRARY_H
#define HM_LIBRARY_H
#include <iostream>
#include <fstream>
#include <string>

const int MAX_LIBRARY = 15;

namespace hangman
{
	class Library
	{
		std::string words[MAX_LIBRARY];

		public:
			Library();
			Library(std::string filename);
			int read(std::istream& is);
			int getWord(int difficulty);
	};
}
#endif
