// race.cpp
#include <iostream>
#include <random>
#include "horse.h"
#include "race.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Race::Race(){
	for (int numHorse = 0; numHorse <NUM_HORSES; numHorse++){
		horses[numHorse].init(numHorse,trackLength);
	} // end for
} // end race

void Race::start(){
	bool keepGoing = true;
	while (keepGoing){
		for (int numHorse =0; numHorse < NUM_HORSES; numHorse++){
			horses[numHorse].advance();
			horses[numHorse].printLane();
			if (horses[numHorse].isWinner()){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press ENTER to continue race" << std::endl;
		std::cin.ignore();
	} // end while
} // end start


