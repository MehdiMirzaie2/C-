#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <map>
#include <functional>

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

		struct options
		{
			std::string	level;
			void	(Harl::*f)(void);
		};
		struct options	option[4];

	public:
		Harl(void);
		void complain( std::string level );
};

void	tester(Harl harl);

#endif