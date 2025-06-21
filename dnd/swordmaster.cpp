#include "swordmaster.h"
#include <iostream>
using namespace std;
// When swordmaster constructor is called, instantiate the Character
// constructor and pass the name from the Swordmaster constuctor into it
Swordmaster::Swordmaster(string name) :Character(name)
{
   attackStrength = 5;
   endurance = 23;
   remainingHealth = endurance;
   //Assigning the weapon for the character
   weapons[0] = "Long Sword";
   weapons[1] = "Rapier";
   weapons[2] = "katana";
   weapons[3] = "Scimitar";
   weapons[4] = "sabre";
   weapons[5] = "Short Sword";
   weapons[6] = "Ninja stars";
   weapons[7] = "Dual Swords";
   weapons[8] = "Bastard Sword";
   weapons[9] = "Double khukuri";

   weaponAction[0] =  "smashes with a downward swing ";
   weaponAction[1] =  "Swings diagnally ";
   weaponAction[2] =  "Rushes to stab directly to chest ";
   weaponAction[3] =  "360 spin jab ";
   weaponAction[4] =  "Side swipe ";
   weaponAction[5] =  "Swift Downward Swipe ";
   weaponAction[6] =  "Steps and follows up with a peircing motion ";
   weaponAction[7] =  "Swings with brutal force ";
   weaponAction[8] =  "Swings diagnally ";
   weaponAction[9] =  "Stabs two times ";

};
