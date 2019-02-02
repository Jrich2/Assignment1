/*
 * File:   Zampakuto.cpp
 * Author: Justin Richman <jrichman2@ymail.com | jjr16@my.fsu.edu>
 *
 * Created on Feb 1, 2017, 12:00 PM
 */

 #include "Zampakuto.h"


 double Zampakuto::hit(double armor) {
   double damage = hitPoints - (armor * 0.5);
   if (damage < 0) {
       return 0;
   }
   return damage;
 }
