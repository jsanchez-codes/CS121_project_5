// horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position;
		int horseNum;
		int trackLength;
	public:
		Horse();
		void init(int horseNum, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};

#endif
