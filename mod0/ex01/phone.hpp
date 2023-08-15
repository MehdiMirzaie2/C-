# ifndef PHONE_HPP
# define PHONE_HPP

#include <iostream>
#include <string>

class Contact {
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string darkest_secret;
		std::string	number;
		int index;
};

class PhoneBook {
	private:
		Contact contacts[8];

		void add_spaces(int length){
			for (int i = length; i < 9; i++)
				std::cout<<' ';
		}

	public:
		void ADD(int i){
			do {
				std::cout << "enter firstname: ";
				std::getline(std::cin, contacts[i].firstname);
			} while (contacts[i].firstname.length() == 0);

			do {
				std::cout << "enter lastname: ";
				std::getline(std::cin, contacts[i].lastname);
			} while (contacts[i].lastname.length() == 0);

			do {
				std::cout << "enter nickname: ";
				std::getline(std::cin, contacts[i].nickname);
			} while (contacts[i].nickname.length() == 0);

			do {
				std::cout << "enter number: ";
				std::getline(std::cin, contacts[i].number);
			} while (contacts[i].number.length() == 0);

			do {
				std::cout << "enter darkest secret: ";
				std::getline(std::cin, contacts[i].darkest_secret);
			} while (contacts[i].darkest_secret.length() == 0);

			contacts[i].index = i;
		}

		void SEARCH(int i){
			int	to_display = 0;
			int length;

			for (int j = 0; j < i; j++){
				std::cout<<contacts[j].index<<"         |";
				if (contacts[j].firstname.length() > 10)
					std::cout<<contacts[j].firstname.substr(0, 9)<<".|";
				else{
					std::cout<<contacts[j].firstname;
					add_spaces(contacts[j].firstname.length());
					std::cout<<'|';
				}
				if (contacts[j].lastname.length() > 10)
					std::cout<<contacts[j].lastname.substr(0, 9)<<".|";
				else{
					std::cout<<contacts[j].lastname;
					add_spaces(contacts[j].lastname.length());
					std::cout<<'|';
				}
				if (contacts[j].nickname.length() > 10)
					std::cout<<contacts[j].nickname.substr(0, 9)<<'.'<<std::endl;
				else
					std::cout<<contacts[j].nickname<<std::endl;
			}

			std::cout<<"which contact would you like: ";
			std::cin>>to_display;

			std::cout<<"firstname: "<<contacts[to_display].firstname<<std::endl;
			std::cout<<"lastname: "<<contacts[to_display].lastname<<std::endl;
			std::cout<<"nickname: "<<contacts[to_display].nickname<<std::endl;
			std::cout<<"number: "<<contacts[to_display].darkest_secret<<std::endl;
			std::cout<<"darkest secret: "<<contacts[to_display].number<<std::endl;
		}

		void EXIT(void){
			exit(EXIT_SUCCESS);
		}
};

#endif