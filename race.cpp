// race.cpp
#include <iostream>
#include <random>
#include "horse.h"
#include "race.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Race::Race(){
	for (int HORSE_NUM = 0; HORSE_NUM < NUM_HORSES; HORSE_NUM++){
		horses[HORSE_NUM].init(HORSE_NUM,TRACK_LENGTH);
	} // end for
} // end race

void Race::start(){
	bool keepGoing = true;
	while (keepGoing){
		for (int HORSE_NUM = 0; HORSE_NUM < NUM_HORSES; HORSE_NUM++){
			horses[HORSE_NUM].advance();
			horses[HORSE_NUM].printLane();
			if (horses[HORSE_NUM].isWinner()){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press ENTER to continue race" << std::endl;
		std::cin.ignore();
	} // end while
} // end start


