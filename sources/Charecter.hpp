#ifndef MY_CHARECTER
#define MY_CHARECTER

#include <iostream>
#include <string>

#include "Point.hpp"

using namespace std;

namespace ariel
{

    class Charecter
    {

    private:
        string name;
        Point Location;
        int hitPoint;

    public:
        Charecter(const string &name, const Point &Location, int hitPoint) : name(name), Location(Location), hitPoint(hitPoint)
        {
        }
        bool isAlive() const
        {
            return (this->hitPoint == 1);
        }

        double distance(Charecter *charecter)
        {
            Point point1 = this->getLocation();
            return point1.getX();
        }
        void hit(int know)
        {
        }
        string getName()
        {
            return name;
        }
        Point getLocation()
        {
            return Location;
        }
        void print()
        {
        }
    };
};
#endif