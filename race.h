// race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
        private:
                const int trackLength =15;
                const static int NUM_HORSES = 5;
		Horse horses[NUM_HORSES];
        public:
                Race();
                start();
};

#endif
