/*
 * File:   SimpleHammer.h
 * Author: Justin Richman <jrichman2@ymail.com | jjr16@my.fsu.edu>
 *
 * Created on Feb 1, 2017, 12:00 PM
 */

 #include <string>
 #include "Weapon.h"

 #ifndef SIMPLEHAMMER_H
 #define SIMPLEHAMMER_H

 /**
  * Defines the behavior of a simple hammer (hitpoint = 25, if armor < 30
  * ignore all armor points)
  */
 class SimpleHammer : public Weapon {
 public:

     SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Simple hammer and 25.0
     }

     virtual ~SimpleHammer() {};

     virtual double hit(double armor);

 };

 #endif /* SIMPLEHAMMER_H */
