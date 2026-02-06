// race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
        private:
                int trackLength;
                int NUM_HORSE;
		int HORSE_NUM;
        public:
                Race();
                void advance();
};

#endif
