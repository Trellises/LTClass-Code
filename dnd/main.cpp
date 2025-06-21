#include <iostream>
#include <cstdlib>

#include "wizard.h"
//#include "warrior.h"
//#include "engineer.h"
#include "character.h"

using namespace std;

void createCharacter(string, Character*&);

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
    int weaponID, attack, hit=1;
    int seed;

   cout << "Enter a new seed for random number generation: ";
   cin >> seed;
   srand(seed);
   system("clear");
   cout << "Welcome to CSCI 220 - Gametime!"
         << endl;

    // call createCharacter for your character
    // call createCharacter for your opponent's character


    // loop until either character "dies"
    while(hit)
    {
   // my character calls the attack member function

   // if my attack was a success
   //    display "Good Hit for ME!"
   //    update hit - call hitByOpponent for other character

        if (hit points not 0)
        {
       // my opponent calls the attack member function

           // if my opponent's attack was a success
      //    display "Good Hit for my opponent!"
      //    update hit - call hitByOpponent for my character
        }// if I am still alive

    } // if either player dies, the while loop breaks

}

// I implemented a createCharacter() function to create the character for me
// other than repeating the same lines of code in my main function
void createCharacter(string charName, Character*& one)
{
    int charChoice;

    // Ask the user for character type and name
    cout << "1. Wizard\n2. Warrior\n3. Engineer" << endl;
    cout << "Choose a character type: ";
    cin >> charChoice;
    cout << "Enter your character's name: ";
    cin >> charName;
    cout << endl;

    // instantiate character object based on the specified character type
    // and use charName as the name of the character.
    if (charChoice == 1)
    {
   // dynamically allocate the Wizard Character and assign it to one

    }
    else if (charChoice == 2)
    {
        // dynamically allocate the Warrior Character and assign it to one
    }
    else if (charChoice == 3)
    {
        // dynamically allocate the ?? Character and assign it to one
    }

}
