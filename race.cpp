// race.cpp
#include <iostream>
#include <random>
#include "horse.h"
#include "race.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Race::Race(){
	for (int horseNum = 0; horseNum < NUM_HORSES; horseNum++){
		horses[horseNum].init(horseNum,trackLength);
	} // end for
} // end race

void Race::start(){
	bool keepGoing = true;
	while (keepGoing){
		for (int horseNum = 0; horseNum < NUM_HORSES; horseNum++){
			horses[horseNum].advance();
			horses[horseNum].printLane();
			if (horses[horseNum].isWinner()){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press ENTER to continue race" << std::endl;
		std::cin.ignore();
	} // end while
} // end start


