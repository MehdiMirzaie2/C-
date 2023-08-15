#include "phone.hpp"

int option(std::string input){
	std::string one		= "ADD";
	std::string two		= "SEARCH";
	std::string three	= "EXIT";
	int length			= input.length();

	if (input.empty())
		return (0);
	if (length == 3){
		for (int i = 0; i < length; i++){
			if (input[i] != one[i])
				return (0);
		}
		return (1);
	}
	else if (length == 6){
		for (int i = 0; i < length; i++){
			if (input[i] != two[i])
				return (0);
		}
		return (2);
	}
	else if (length == 4){
		for (int i = 0; i < length; i++){
			if (input[i] != three[i])
				return (0);
		}
		return (3);
	}
	return (0);
}

int main(void)
{
	PhoneBook	book;
	std::string	input;
	int			i = 0;
	int			flag = 1;
	int			option_val;

	while (1){
		do {
			if (flag)
				std::cout << "ADD SEARCH EXIT: ";
			std::getline(std::cin, input);
			option_val = option(input);
			flag = 1;
		} while (input.length() == 0 || option_val == 0);

		if (option_val == 1){
			if (i > 7)
				i = 7;
			book.ADD(i);
			i++;
		}
		else if (option_val == 2){
			book.SEARCH(i);
			flag = 0;
		}
		else if (option_val == 3)
			book.EXIT();
		input.clear();
		std::cin.clear();
	}
	return (0);
}
