#include "barbarian.h"
#include <iostream>
using namespace std;
// When Barbarian constructor is called, instantiate the Character
// constructor and pass the name from the Barbarian constuctor into it
Barbarian::Barbarian(string name) :Character(name)
{
   attackStrength = 5;
   endurance = 25;
   remainingHealth = endurance;
   //Assigning the weapon for the character
   weapons[0] = "war hammer ";
   weapons[1] = "axe ";
   weapons[2] = "short spear ";
   weapons[3] = "long spear ";
   weapons[4] = "cleaver ";
   weapons[5] = "flail ";
   weapons[6] = "halberd ";
   weapons[7] = "morningstar ";
   weapons[8] = "Bastard Sword ";
   weapons[9] = "Double khukuri ";

   weaponAction[0] =  "smashes with a downward swing ";
   weaponAction[1] =  "Swings diagnally ";
   weaponAction[2] =  "Rushes to stab directly to chest ";
   weaponAction[3] =  "360 spin jab ";
   weaponAction[4] =  "Side swipe ";
   weaponAction[5] =  "Swings downward with force ";
   weaponAction[6] =  "Steps and follows up with a peircing motion ";
   weaponAction[7] =  "Swings with brutal force ";
   weaponAction[8] =  "Swings diagnally ";
   weaponAction[9] =  "Stabs two times ";

};
