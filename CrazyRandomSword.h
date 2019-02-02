/*
 * File:   CrazyRandomSword.h
 * Author: Justin Richman <jrichman2@ymail.com | jjr16@my.fsu.edu>
 *
 * Created on Feb 1, 2017, 12:00 PM
 */

 #include <string>
 #include <cstdlib>    /* srand, rand */
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

     CrazyRandomSword() : Weapon("Crazy random sword", rand() % 94 + 7) { //Calls Weapon(name, hitpoints) constructor with values Crazy random sword and random int
     }           //rand() % 94 + 7 get random num from 7 - 100

     virtual ~CrazyRandomSword() {};

     virtual double hit(double armor);

 };

 #endif /* CRAZYRANDOMSWORD_H */
