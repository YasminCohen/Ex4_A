#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Team.hpp"

using namespace std;
using namespace ariel;

Point a(1,1);
Point b(4,5);
TEST_CASE("Test Point: "){

    CHECK_THROWS(Point(-5, 0));
    CHECK_THROWS(Point(0, -5));
    CHECK(a.distance(b)== 5);
    Point result = moveTowards(a,b,3);
    CHECK(result != b );
    CHECK_NOTHROW(a.print());
};
TEST_CASE("Test Charecter: "){

    CHECK_THROWS(Charecter("yasmin", Point(0,0),-1));
    CHECK_THROWS(Charecter("yasmin", Point(0,0),0));
    CHECK_THROWS(Charecter("yasmin",Point(0,0), 160));
    CHECK_THROWS(Charecter("",Point(0,0),150));
    Charecter one("ori",a,100);
    Charecter *Two = new Charecter("avi",b,100);
    CHECK_THROWS(Charecter("naama",b,100));
    CHECK(one.distance(Two)== 5);
    string name = one.getName();
    CHECK(name.compare("ori"));
    CHECK(one.getLocation() == a);
    CHECK(one.isAlive() ==  true);
    one.hit(4);
    CHECK(one.isAlive() == true);
    one.hit(1);
    CHECK(one.isAlive() == false);
    CHECK_NOTHROW(one.print());
    delete Two;
};
TEST_CASE("Test Cowboy: "){

    Cowboy cowboyPlayer("yasmin", Point(0,0));
    YoungNinja *YoungNinjaPlayer = new YoungNinja("hamas",Point(2,3));
    for(int i=0; i<6; i++){
        cowboyPlayer.shoot(YoungNinjaPlayer);
    }
    CHECK(cowboyPlayer.hasboolets() == false);
    cowboyPlayer.reload();
    CHECK(cowboyPlayer.hasboolets() == true);
    delete YoungNinjaPlayer;
};
TEST_CASE("Test Ninja: "){
    Cowboy *cowboyPlayer = new Cowboy("yasmin", Point(0,2));
    Cowboy *cowboyPlayer2 = new Cowboy("yasmin2", Point(0,0.5));
    cowboyPlayer->hit(110);//cowboy died!
    YoungNinja YoungNinjaPlayer("hamas",Point(0,1));
    CHECK_THROWS(YoungNinjaPlayer.move(cowboyPlayer));//cowboy alrady not exixt
    cowboyPlayer->hit(70);// lost 40
    YoungNinjaPlayer.slash(cowboyPlayer);
    CHECK(cowboyPlayer->isAlive() == true);
    YoungNinjaPlayer.slash(cowboyPlayer2);
    CHECK(cowboyPlayer->isAlive() == false);
    delete cowboyPlayer;
    delete cowboyPlayer2;
};
TEST_CASE("Test Team: "){
    Cowboy *chif1 = new Cowboy("chif1", Point(5,5));
    OldNinja *chif2 = new OldNinja("chif2", Point(6,5));
    
    Cowboy *soliderCowboy1 = new Cowboy("soliderCowboy1", Point(5,5));
    Cowboy *soliderCowboy2 = new Cowboy("soliderCowboy2", Point(2,5));
    Cowboy *soliderCowboy3 = new Cowboy("soliderCowboy3", Point(2,3));
    Cowboy *soliderCowboy4 = new Cowboy("soliderCowboy4", Point(8,5));
    Cowboy *soliderCowboy5 = new Cowboy("soliderCowboy5", Point(5,1));
    YoungNinja *soliderYoungNinja6 = new YoungNinja("soliderYoungNinja6", Point(9,5));
    YoungNinja *soliderYoungNinja7 = new YoungNinja("soliderYoungNinja7", Point(9,8));
    TrainedNinja *soliderTrainedNinja8 = new TrainedNinja("soliderTrainedNinja8", Point(9,7));
    OldNinja *soliderOldNinja9 = new OldNinja("soliderOldNinja9", Point(9,3));
    OldNinja *soliderOldNinja10 = new OldNinja("soliderOldNinja10", Point(6,3));
            
    CHECK_NOTHROW(Team teamNumber1(chif1));
    CHECK_NOTHROW(Team teamNumber2(chif2));
    Team teamNumber1(chif1);
    teamNumber1.add(soliderCowboy1);
    teamNumber1.add(soliderCowboy2);
    teamNumber1.add(soliderCowboy3);
    teamNumber1.add(soliderCowboy4);
    teamNumber1.add(soliderCowboy5);
    teamNumber1.add(soliderYoungNinja6);
    teamNumber1.add(soliderYoungNinja7);
    teamNumber1.add(soliderTrainedNinja8);
    teamNumber1.add(soliderOldNinja9);
    teamNumber1.add(soliderOldNinja10);
    OldNinja *soliderOldNinja11 = new OldNinja("soliderOldNinja11", Point(3,3));
    CHECK_THROWS(teamNumber1.add(soliderOldNinja11));//11 player error
    delete soliderCowboy1;
    delete soliderCowboy2;
    delete soliderCowboy3;
    delete soliderCowboy4;
    delete soliderCowboy5;
    delete soliderYoungNinja6;
    delete soliderYoungNinja7;
    delete soliderTrainedNinja8;
    delete soliderOldNinja9;
    delete soliderOldNinja10;
    delete soliderOldNinja11;
    delete chif1;
    delete chif2;
    
};
