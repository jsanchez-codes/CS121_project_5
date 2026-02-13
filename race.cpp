// race.cpp
#include <iostream>
#include <random>
#include "horse.h"
#include "race.h"

Race::Race(){
	for (int i = 0; i < HORSE_NUM; i++){
		horses[i].init(i,TRACK_LENGTH);
	} // end for
} // end race

void Race::start(){
	bool keepGoing = true;
	while (keepGoing){
		for (int i = 0; i < HORSE_NUM; i++){
			horses[i].advance();
			horses[i].printLane();
			if (horses[i].isWinner()){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press ENTER to continue race" << std::endl;
		std::cin.ignore();
	} // end while
} // end start


