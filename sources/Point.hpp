#ifndef MY_POINT
#define MY_POINT

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

namespace ariel{
    
    class Point
    {
    private:
        double xOfPoint;
        double yOfPoint;
    public:
        Point(double xNew, double yNew):xOfPoint(xNew),yOfPoint(yNew){
        }

        double distance(const Point& other) const {
            double deltaX = other.xOfPoint - this->xOfPoint;
            double deltaY = other.yOfPoint - this->yOfPoint;
            return std::sqrt(deltaX * deltaX + deltaY * deltaY);
        }

        void print(){
        }

        friend Point moveTowards(const Point& first, const Point& second, const double distance) {
            return Point(0,0);
        }

        bool operator==(const Point& other) const {
        bool upOf= (this->xOfPoint == other.xOfPoint);
        bool downOf= (this->yOfPoint == other.yOfPoint);
        return upOf  && downOf ;
    }

        void setX(double setOfx){
            this->xOfPoint = setOfx;
        }
        void setY(double setOfy){
            this->yOfPoint = setOfy;
        }
        double getX() const{
            return this->xOfPoint;
        }
        double getY() const{
            return this->yOfPoint;
        }
    };
}
#endif