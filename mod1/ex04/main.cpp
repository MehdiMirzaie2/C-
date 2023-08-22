#include "Sed.hpp"

int main(void){
	sed file_reader("myfile", "hello", "you");
	file_reader.read_all();
	return (0);
}