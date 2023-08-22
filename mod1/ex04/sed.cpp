#include "Sed.hpp"
#include <iostream>
#include <string>

sed::sed(std::string file_name, std::string s1, std::string s2){
	this->setter(file_name, s1, s2);
}

sed::~sed(void){
	std::cout<<"done"<<std::endl;
}

void	sed::setter(std::string &file_name, std::string &s1, std::string &s2){
	this->file_name = file_name;
	this->s1 = s1;
	this->s2 = s2;
}

void sed::replace_all(std::string& s, std::string const& toReplace, std::string const& replaceWith){
    std::string buf;
    std::size_t pos = 0;
    std::size_t prevPos;

    // Reserves rough estimate of final size of string.
    buf.reserve(s.size());
    while (true) {
        prevPos = pos;
        pos = s.find(toReplace, pos);
        if (pos == std::string::npos)
            break;
        buf.append(s, prevPos, pos - prevPos);
        buf += replaceWith;
        pos += toReplace.size();
    }
    buf.append(s, prevPos, s.size() - prevPos);
    s.swap(buf);
}

void	sed::read_all(void){
	std::string myText;

	std::ifstream MyFile(this->file_name);
	if (!MyFile.is_open()) {
		std::cerr << "Error opening file." << std::endl;
		return ;
	}

	std::ofstream OutputFile("output.txt"); // Open the output file
	if (!OutputFile.is_open()) {
		std::cerr << "Error creating output file." << std::endl;
		return ;
	}

	while (std::getline (MyFile, myText)){
		replace_all(myText, this->s1, this->s2);
		OutputFile << myText << '\n';
	}
	MyFile.close();
}
