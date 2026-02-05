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
	h.printLane();
} // end testHorse


