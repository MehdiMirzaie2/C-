# ifndef PHONE_HPP
# define PHONE_HPP

class PhoneBook {       // The class
  public:             // Access specifier
    Contact contact[8];   // Attribute (int variable)
    // string myString;  // Attribute (string variable)

	int ADD(void){
		// 
	}

	int SEARCH(int index){
		... ;
	}

	void EXIT(void){

	}
};

class Contact {       // The class
  public:             // Access specifier
    char first_name[];
	char last_name[];
	char nick_name[];
	int	number;
	char darkest_secret[];
};

#endif