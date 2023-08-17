#include <iostream>
#include <string>

int	main(void){
	std::string	mystring = "HI THIS IS BRAIN";
	std::string	*stringPTR = &mystring;;
	std::string	&stringREF = mystring;

	std::cout<<"address to string: "<<&mystring<<std::endl;
	std::cout<<"address to stringPTR: "<<&stringPTR<<std::endl;
	std::cout<<"address to stringREF: "<<&stringREF<<std::endl;
	std::cout<<std::endl;
	std::cout<<"address to string: "<<mystring<<std::endl;
	std::cout<<"address to stringPTR: "<<stringPTR<<std::endl;
	std::cout<<"address to stringREF: "<<stringREF<<std::endl;
}
