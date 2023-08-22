#include "Harl.hpp"
#include <cstdlib>

void	tester(Harl harl){
	std::string levels[4];
	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";

	int lb = 0, ub = 3;
    for (int i = 0; i < 50; i++){
		std::cout<<'['<<i<<"] ";
        harl.complain(levels[(rand() % (ub - lb + 1)) + lb]);
	}
}