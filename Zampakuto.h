/*
 * File:   Zampakuto.h
 * Author: Justin Richman <jrichman2@ymail.com | jjr16@my.fsu.edu>
 *
 * Created on Feb 1, 2017, 12:00 PM
 */

 #include <string>
 #include "Weapon.h"

 #ifndef ZANPAKUTO_H
 #define ZANPAKUTO_H

 /**
  * Defines the behavior of a zanpakuto (hitpoint = 60, ignores half of all armor)
  *
  */
 class Zanpakuto : public Weapon {
 public:

     Zampakuto() : Weapon("Zampakuto", 60.0) { //Calls Weapon(name, hitpoints) constructor with values Zampakuto and 60.0
     }

     virtual ~Zampakuto() {};

     virtual double hit(double armor);

 };

 #endif /* ZAMPAKUTO_H */
