/*
 * File:   CrazyRandomSword.cpp
 * Author: Justin Richman <jrichman2@ymail.com | jjr16@my.fsu.edu>
 *
 * Created on Feb 1, 2017, 12:00 PM
 */

 #include "CrazyRandomSword.h"
 #include <cmath>

 double CrazyRandomSword::hit(double armor) {
     double damage = 0;
     srand (time(NULL));

     //int r = rand() % 94 + 7; //Get random hitpoints between 7 - 100
     double OneThird = floor(armor / 3);   //Get most random armor can be
     int randArmor = (int)OneThird;
     randArmor = rand() % (randArmor - 1) + 2;     //Random number from 2 to 1/3 the armor

     damage = hitPoints - (armor - randArmor);

     if (damage < 0) {
         return 0;
     }
     return damage;
 }
