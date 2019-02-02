/*
 * File:   CrazyRandomSword.h
 * Author: Justin Richman <jrichman2@ymail.com | jjr16@my.fsu.edu>
 *
 * Created on Feb 1, 2017, 12:00 PM
 */

 #include <string>
 #include <cmath>
 #include <cstdlib>     /* srand, rand */
 #include <ctime>       /* time */
 #include "Weapon.h"

 #ifndef CRAZYRANDOMSWORD_H
 #define CRAZYRANDOMSWORD_H

 /**
  * Defines the behavior of a crazy random Sword (hitpoints = random integer number between 7 and
100. Ignores a random amount of integer armor points, ranging from 2 to a third of
the armor the weapon hits.)
  */
 class CrazyRandomSword : public Weapon {
 public:

     CrazyRandomSword() : Weapon("Crazy random sword", getHit()) { //Calls Weapon(name, hitpoints) constructor with values Crazy random sword and random int
     }           //rand() % 94 + 7 get random num from 7 - 100

     virtual ~CrazyRandomSword() {};

     virtual double hit(double armor);

 private:
      int getHit(){   //Use this funct to get rand # 7 - 100 into the constructor
           srand (time(NULL));
           return rand() % 94 + 7;
      }
 };

 #endif /* CRAZYRANDOMSWORD_H */
