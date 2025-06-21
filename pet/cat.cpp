/*
  file name -- cat.cpp

  This file contais the definitions of member functions of
  Car class
*/

// ====================== header files ======================
#include <string>                   // for string class
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;                // for standard library
#include "cat.h"


Cat::Cat(string name, string color, string breed, string food,
         string move) : Pet(name, color)
{
   catBreed = breed;
   favFood = food;
   movement  = move;
   limbs = 4;
   setHunger(5);
   setMood(1);

} // set-value constructor

Cat::Cat()
{

   cout << "**call to default constructor" << endl;
} // set-default constructor

// mutators

// accessor
string Cat::getBreed()
{

   return catBreed;
}

string Cat::getFood()
{
   return favFood;
}

string Cat::getMovement()
{
   return movement;
}

void Cat::printDesc()
{

}
void Cat:: describePet()
{
    cout << "This pet is a Bird." << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Breed: " << getBreed() << endl;
    cout << "Favorite Food: " << getFood() << endl;
    cout << "Movement: " << getMovement() << endl;
    cout << "Mood(1 is depressed 10 is high/really Happy): " << getMood() << endl;
}
void Cat::makeSound()
{
   cout << getName() << ": Meow, Meow!!";
}

void Cat:: drawPic()
{
   cout << "cat" << endl;
   cout <<  "|\__/,|   (`\""<< endl;
   cout << "(|_ _  |.--.) )" << endl;
   cout <<" (( T   )     /" << endl;
   cout <<"   (((^_(((/(((_/" << endl;
   cout << endl;


}


void Cat:: eat()
{
    cout << getName() << " the cat is eating " << getFood() << endl;
   cout << "Hunger will decrease by one" << endl;
 if (getHunger() > 0)
   setHunger(getHunger() -1);
 else
   setHunger(0);
}

void Cat:: play()
{
    int currentMood;
   cout << getName() << "the cat is" << getMovement() << endl;

   cout << "Happiness will increase by one" << endl;

   //get current mood
   currentMood = getMood();

   //Increment the mood level
   currentMood++;

   //Set new mood level using setMood() mutator
   setMood(currentMood);

}

