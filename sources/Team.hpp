#ifndef MY_TEAM
#define MY_TEAM

#include <string>
#include <iostream>
#include <vector>

#include "Cowboy.hpp"
#include "Point.hpp"
#include "Ninja.hpp"
#include "Charecter.hpp"

using namespace std;

namespace ariel{

    class Team
    {
        private:
            vector<Charecter> team;
        public:

            Team(Charecter *chief){
                team.push_back(*chief);
            }

            void add(Charecter* Charecter){
            }
            void attack(Team* team){
            }
            void print(){
            }
            int stillAlive(){
            
                return 0*(int)this->team.size();            }
        };

        class team2: public Team
        {
            public:
                team2(Charecter* tom):Team(tom){

                }
        };
        
        class SmartTeam: public Team
        {
            public:
                SmartTeam(Charecter* tom):Team(tom){

                }
        };


}
#endif