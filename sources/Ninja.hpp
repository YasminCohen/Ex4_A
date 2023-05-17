#ifndef MY_NINJA
#define MY_NINJA

#include <iostream>
#include <string>

#include "Point.hpp"
#include "Cowboy.hpp"
#include "Charecter.hpp"

using namespace std;

namespace ariel{
    const int SpeedYoungNinja = 14;
    const int hitPointOfYoungNinja = 100;
    const int speedTrainedNinja =12;
    const int hitPointOfTrainedNinja = 120;
    const int speedOldNinja = 8;
    const int hitPointOfOldNinja = 150;

    class Ninja: public Charecter
    {
        private:
            int speed;
        public:
            Ninja(const string& name, int speed,const Point& Location, int hitPoint):speed(speed),Charecter(name, Location,hitPoint){
            }
            void move(Cowboy* cowboy){
            }
            void slash(Cowboy* cowboy){
            }
    };


    class YoungNinja: public Ninja
    { 
        public:
            YoungNinja(const string& name ,const Point& point):Ninja(name,SpeedYoungNinja , point ,hitPointOfYoungNinja) {
            }
    };

    class TrainedNinja: public Ninja
    {
        public:
            TrainedNinja(const string& name,const Point& point):Ninja(name,speedTrainedNinja, point,hitPointOfTrainedNinja){
            }
    };


    class OldNinja: public Ninja
    { 
        public:
            OldNinja(const string& name,const Point& point):Ninja(name,speedOldNinja, point, hitPointOfOldNinja){
            }

    };
}
#endif