// race.cpp
#include <iostream>
#include <random>
#include "race.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Race::Race(){
	Race::NUM_HORSES = 5;
	Race::trackLength = 15;
	Race::HORSE_NUM = 0;
} // end constructor

Race::start(){
	bool keepGoing = true;
	while (keepGoing);
		for (Race::HORSE_NUM = 0; Race::HORSE_NUM < Race::NUM_HORSES; Race::HORSE_NUM++;)
			void advance();
			void printLane();
			if isWinner();
				bool keepGoing = false;
			} // end if
		} // end for
} // end constructor


