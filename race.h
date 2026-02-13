// race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
        private:
                const int TRACK_LENGTH = 15;
                const static int HORSE_NUM = 5;
		Horse horses[HORSE_NUM];
        public:
                Race();
                void start();
};

#endif
