#ifndef BOOK_HPP
#define BOOK_HPP

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class Contact{
	public:
	string 	firstname;
	string 	lastname;
	string 	nickname;
	string		darkestsecret;
	unsigned int	number;
	int				index;
};

class PhoneBook{
	public:
	
	Contact contact;
	void ADD(int index){
		cout << "First Name: ";
		getline(cin, contact.firstname);
		cout << "Last Name: ";
		getline(cin, contact.lastname);
		cout << "Nick Name: ";
		getline(cin, contact.nickname);
		cout << "Darkest Secret: ";
		getline(cin, contact.darkestsecret);
		cout << "Number: ";
		while (!(cin >> contact.number)){
			cout << "Enter a number: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		contact.index = index;
	}
	void EXIT(){
		exit(EXIT_SUCCESS);
	}
};
#endif