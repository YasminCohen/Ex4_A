#ifndef MY_COWBOY
#define MY_COWBOY

#include <string>
#include <iostream>

#include "Point.hpp"
#include "Charecter.hpp"

using namespace std;

namespace ariel{

    class Ninja;
    const int bools = 6;
    const int hiting = 110;

    class Cowboy: public Charecter
    {
        private:
            int amountOfBools;
        public:
            Cowboy(const string& name, const Point& Location):amountOfBools(bools),Charecter(name,Location,hiting){
            }
            
            void shoot(Ninja *Ninja){
            }

            bool hasboolets(){
                return this->isAlive();
            }

            void reload(){
            }
            
            string print(){    
                return this->getName();
            }
    };
}
#endif