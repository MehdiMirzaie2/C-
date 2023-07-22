#include "book.hpp"
#include <unistd.h>

int main(void)
{
	string		input;
	PhoneBook	book[8];
	int			index = 0;
	int			indexfinder;

	while (1){
		cout<<"ADD, SEARCH, EXIT?"<<endl;
		getline(cin, input);
		
		if (input == "EXIT")
			book[0].EXIT();
		if (input == "ADD" && index < 8)
		{
			book[index].ADD(index);
			index++;
			cout<<index<<'\n';
		}
		else if (input == "SEARCH")
		{
			if (index == 0){
				cout<<"\nno contacts yet! ADD some\n\n";
				continue ;
			}
			for (int k = 0; k < index; k++)
			{
				cout<<book[k].contact.index<<" | "<<book[k].contact.firstname<<" | ";
				cout<<book[k].contact.lastname<<" | "<<book[k].contact.nickname<<'\n';
			}
			cout<<"Enter index: ";
			while (!(cin >> indexfinder) || indexfinder > index || indexfinder < 0)
			{
				cout<<"Enter a number as index between 0 to 7: ";
				cin.clear();
				cin.ignore(123, '\n');
			}
			cout<<"\nyou are looking for: \n";
			cout<<"\tFirst Name:\t "<<book[indexfinder].contact.firstname<<"\n";
			cout<<"\tLast Name:\t "<<book[indexfinder].contact.lastname<<"\n";
			cout<<"\tNickname:\t "<<book[indexfinder].contact.nickname<<"\n";
			cout<<"\tDarkest Secret:\t "<<book[indexfinder].contact.darkestsecret<<"\n";
			cout<<"\tindex:  \t\t"<<book[indexfinder].contact.index<<"\n\n";
			continue ;
		}
		cin.clear();
		cin.ignore();
	}
	return (0);
}
