/*
.Synopsis
    main file
.Description
    reqs
    1. this is the file where main function goes

.Author
    James Lewis
.Date
    06/02/2025
*/

#include "headerFiles\common\commonUtility003.h"

int main(){

	std::vector<int> numbers = {1,2,3,4,5};
	addTenToLastIndex(numbers, 10);
	std::cout << "numbers global: " << std::endl;
	std::cout << numbers.back() << std::endl;
	
	return 0;
}
