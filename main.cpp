#include <iostream>
#include "horse.h"

void testHorse();

int main(){
	std::cout << "OOP Horse Race!" << std::endl;

	testHorse();

	return 0;
} // end main

void testHorse(){
	Horse h;
	h.init(1, 15);
	for (int i = 0; i < 10; i++){
		h.advance();
		h.printLane();
	} // end for
} // end testHorse


