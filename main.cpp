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

void Race(){;
	Race.start();
} //end Race

void Horse(){
	horses[numHorse].init(horseNum, trackLength);
	bool keepGoing = true;
	while (keepGoing){
		horses[numHorse].advance();
		horses[numHorse].printLane();
		if (horses[numHorse].isWinner()){
			keepGoing =false;
		} // end if
	} // end while
} // end Horse

