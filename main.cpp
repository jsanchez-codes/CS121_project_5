#include <iostream>
#include "horse.h"
#include "race.h"

void Horse();
void Race();

int main(){
	std::cout << "OOP Horse Race!" << std::endl;

	Race();
	Horse();

	return 0;
} // end main

void Race(){
	Race r;

void Horse(){
	Horse h;
	h.init(1, 15);
	bool keepGoing = true;
	while (keepGoing){
		h.advance();
		h.printLane();
		if (h.isWinner()){
			keepGoing =false;
		} // end if
	} // end while
} // end testHorse


