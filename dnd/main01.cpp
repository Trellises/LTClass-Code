#include <iostream>
#include <cstdlib>
#include "utility.h"
#include "wizard.h"
#include "swordmaster.h"
#include "barbarian.h"
#include "character.h"

using namespace std;

void createCharacter(string, Character*&);
void displaySetting();
// NOTE!!!
/*
    If you do not want to use std:: everytime you want to use cout or cin
    you can type the statement "using namespace std;" at the top of the
    Character class. Then you can use the find/replace feature in each
    file to replace all instances of "std::" with "". That should remove
    all the instances of "std::" in the code.
*/
int main() {
    // variable declaration and initialization
    string myName, yourName;
    Character *player, *opponent;
    int weaponID, attack,continueCombat=1,hit=1;
    int seed;

   cout << "Enter a new seed for random number generation: ";
   cin >> seed;
   srand(seed);
   system("clear");
   cout << "Welcome to CSCI 220 - Gametime!"
         << endl;
   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
   cout << "Hello! Welcome to a fun little game." << endl;
   cout << "This game is based off of Dungeons and Dragon(credit to DND)" << endl;
   cout << "The basics of the game consists fanatasy characters in a fantasy world." << endl;
   cout << "In this world you will be traveling trough a Forrest where you want to level up." << endl;
   cout << "While in this forest you will fight other characters around you in order to live another day." << endl;
   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;


       // call createCharacter for your character
      createCharacter(myName, player);
    // call createCharacter for your opponent's character
      createCharacter(yourName, opponent);
      //This is to describe the setting of where this takes place
      displaySetting();
    // loop until either character "dies"
    while(continueCombat)
    {
   // my character calls the attack member function
      attack = player-> attack(weaponID, myName);
   // if my attack was a success
   //    display "Good Hit for ME!"
   //    update hit - call hitByOpponent for other character
         if(attack == hit)
           {
              cout << "That is a good hit by me"<< endl;
              hit = opponent-> hitByOpponent(attack);

            }
            //check if opponent is still alive
        if (opponent ->getHitPoints() != 0)
        {
       // my opponent calls the attack member function
       attack = opponent->attack(weaponID, yourName);

           // if my opponent's attack was a success
           if (attack == hit )
      //    display "Good Hit for my opponent!"
      //    update hit - call hitByOpponent for my character
      {
         cout << "Good hit from my opponent!" << endl;
            //hit is updated and passes attack when character is hit
         hit = player->hitByOpponent(attack);

      }
      else
      {
         //Opponent is defeated, set it back to zero to end the loop
         continueCombat = 0;
      }
        }
        //compare getHitPoints to see if it is equal to 0
        if(player->getHitPoints() == 0)
        {
          continueCombat = 0;
         }// if I am still alive

    } // if either player dies, the while loop breaks

}

// I implemented a createCharacter() function to create the character for me
// other than repeating the same lines of code in my main function
void createCharacter(string charName, Character*& one)
{
    int charChoice;
    bool isValidChoice = false;

    // Ask the user for character type and name
    cout << "1. Wizard\n2. Barbarian\n3. Swordmaster" << endl;
    cout << "Choose a character type between numebers (1-3): " << endl;
    cin >> charChoice;
    cout << "Enter your character's name (only letters): ";
    cin >> charName;
    cout << endl;

    // instantiate character object based on the specified character type

    // and use charName as the name of the character.
    if (charChoice == 1)
    {
   // dynamically allocate the Wizard Character and assign it to one
      one = new Wizard (charName);
      isValidChoice = true;
    }
    else if (charChoice == 2)
    {
        // dynamically allocate the Barbarian Character and assign it to one
        one = new Barbarian (charName);
        isValidChoice = true;
    }
      else if (charChoice == 3)
    //{
        // dynamically allocate the swordmaster Character and assign it to one
        one = new Swordmaster (charName);
        isValidChoice = true;
   // }

}

void displaySetting()
{
   cout << endl;
      cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

   cout << "First things first, the first character chosen is you. The second character you will choos will be your opponent" << endl;
   cout << "Each player has a dice that needs to be rolled and that will be the deciding factor of what attacks hit" << endl;
   cout << "Whether your attack will hit or not is entirely up to luck." << endl;
   cout << endl;
   cout << "Isn't that great!" << endl;
   cout << endl;
   cout << "After choosing characters you may be able to take turns attacking each other just so that it is fair." << endl;
   cout << "The more fair the better." << endl;
   cout << "Don't worry this is a totally safe and wonderful game with not too much violence." << endl;
   cout << "Get out there and try not to die" << endl;
   cout << ":)" << endl;
   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
   cout << endl;

   }
