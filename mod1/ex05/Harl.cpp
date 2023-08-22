#include "Harl.hpp"

Harl::Harl(void){
	option[0].level = "debug";
	option[0].f = &Harl::debug;
	option[1].level = "info";
	option[1].f = &Harl::info;
	option[2].level = "warning";
	option[2].f = &Harl::warning;
	option[3].level = "error";
	option[3].f = &Harl::error;
}


void	Harl::debug( void ){
	std::cout<<"I love having extra bacon for my "
	<<"7XL-double-cheese-triple-pickle-special-ketchup burger. "
	<<"I really do!"<<std::endl;
}

void Harl::info( void ){
	std::cout<<"I cannot believe adding extra bacon costs more money. "
	<<"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning( void ){
	std::cout<<"I think I deserve to have some extra bacon for free. "
	<<"I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error( void ){
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain( std::string level ){
	static int i = -1;
	if (i <= 3)
		level == option[++i].level ? (this->*option[i].f)() : complain(level) ;
	i = -1;
}