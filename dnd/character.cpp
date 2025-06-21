#include "character.h"
#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
#include "utility.h"
using namespace std;

// character constuctor takes in the name of the character
Character::Character(std::string name)
{
    charName = name;
    //cout << "character constructor" << endl;
}


// setName function can be used to change the character's name
void Character::setName(std::string name)
{
    charName = name;
    //cout << "setName member function" << endl;
}

// get name can be used to retrive the character's name
std::string Character::getName()
{
    return charName;
}

int Character::selectWeapon()
{
    int weaponID;
    // loop through all the weapons a character has and print them out
    for (int i=0; i<MAXNUMOFWEAPONS; i++)
        std::cout << i+1 << ". " << weapons[i] << std::endl;

    // get a weapon based on the users choice
    do
    {
       std::cout << "Select a weapon: ";
       std::cin >> weaponID;
       std::cout << std::endl;
    } while (weaponID < 1 || weaponID > 10);

    // return the ID of that weapon
    return (weaponID-1);
}

int Character::attack(int weaponID, std::string opponent)
{
    int tenSidedDiceRoll;


    // calls the selectWeapon function and make the character select a weapon
    weaponID = selectWeapon();




    // tenSidedDiceRoll = a random value between 0 and 1 and multiply by 20
      srand(time(0));

      tenSidedDiceRoll = (((rand() % 21) * 0.1) * 10);
    // print out what number was rolled
      cout << "The  number that was rolled: " << tenSidedDiceRoll << endl;
    // print out the character name, weapon used and the weapon's action
   cout << charName <<" " << weapons[weaponID] << " " << weaponAction[weaponID] ;
    // if the roll number was greater than attack strength display a message
   if (tenSidedDiceRoll > attackStrength)
   {
      cout << "You've been hit by your opponent " << endl;
      // indicating the hit results and the opponent name return a 1
      return 1;
   }



    // if the roll was not greater than the attack strength
    // display the non hit results and the opponent's name, return 0
    else if (tenSidedDiceRoll < attackStrength)
    {
         cout << "no damage taken from opponent for "
              << charName
              << endl;

              return 0;
     }
}


int Character::hitByOpponent(int hitPoint) {
    // reduce the remaining health points by the hit point
      remainingHealth -= 1
    // checks if the character has any health points left

    cout << "This is the remaining health points " << getHitPoints() << endl;
    if (remainingHealth <= 0 )
    {
      // if yes, display hit was success and current health points return 1
        cout << "Hit was  a success"
           << endl;

        cout << "*****************************************"
                 << endl;
            cout << "End of Character << " << charName
                 << endl;
            cout << "*****************************************";
         cout << "This is the remaining health points " << getHitPoints() << endl;

           return 1;
        }

   // if no, display character name, "End of Character" message, return 0

      else
        {
           cout << "*****************************************"
                 << endl;
            cout << "End of Character << " << charName
                 << endl;
            cout << "*****************************************"
                 << endl;
            cout << "This is the remaining health points " << getHitPoints() << endl;

               return 0;
         }

}
int Character:: getHitPoints()
{

   return remainingHealth;
}
