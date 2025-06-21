#include "wizard.h"
#include <iostream>
using namespace std;
// When Wizard constructor is called, instantiate the Character
// constructor and pass the name from the Wizard constuctor into it
Wizard::Wizard(string name) :Character(name)
{
   attackStrength= 5;
   endurance = 30;
   remainingHealth = endurance;
    // Assign the values for the weapon and weapon action arrays
    weapons[0] = "wand";
    weapons[1] = "amulet";
    weapons[2] = "poison";
    weapons[3] = "dagger";
    weapons[4] = "dart";
    weapons[5] = "sling";
    weapons[6] = "quarterstaffs";
    weapons[7] = "light crossbow";
    weapons[8] = "spear";
    weapons[9] = "sickle";

    weaponAction[0] = "shoots fire from a wand at ";
    weaponAction[1] = "zaps with the amulet ";
    weaponAction[2] = "gives a poison drink to ";
    weaponAction[3] = " uses lightning ";
    weaponAction[4] = " uses fireball ";
    weaponAction[5] = " uses earth Shatter ";
    weaponAction[6] = " uses shadow attack ";
    weaponAction[7] = " Uses Wind slash ";
    weaponAction[8] = " throws flying bolder ";
    weaponAction[9] = " uses ice Freeze ";
    //cout << "Wizard constructor " << endl;
};
