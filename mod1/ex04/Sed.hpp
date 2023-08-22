#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

class sed{
	private:
		std::string file_name;
		std::string s1, s2;

	public:
		sed(std::string file_name, std::string s1, std::string s2);
		~sed();

		void setter(std::string &file_name, std::string &s1, std::string &s2);
		void replace_all(std::string& s, std::string const& toReplace,
			std::string const& replaceWith);
		void	read_all(void);
};

#endif