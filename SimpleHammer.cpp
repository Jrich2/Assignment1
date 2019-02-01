/*
 * File:   SimpleHammer.h
 * Author: Justin Richman <jrichman2@ymail.com | jjr16@my.fsu.edu>
 *
 * Created on Feb 1, 2017, 12:00 PM
 */

 #include "SimpleHammer.h"

 double SimpleHammer::hit(double armor) {
     double damage = 0;
     if(armor < 30) //Checks if armor is less than 30
     {
       damage = hitPoints;  //Ignores all armor
     }
     else
     {
       damage = hitPoints - armor;  //If armor is greater than 30, hit the armor
     }
     if (damage < 0) {
         return 0;
     }
     return damage;
 }
