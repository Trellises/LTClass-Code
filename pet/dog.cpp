/*
  file name -- dog.cpp

  This file contais the definitions of member functions of
  dog class
*/

// ====================== header files ======================
#include <string>                   // for string class
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;                // for standard library
#include "dog.h"


Dog::Dog(string name, string color, string breed, string food,
         string move) : Pet(name, color)
{
   dogBreed = breed;
   favFood = food;
   movement  = move;
   limbs = 4;
   setHunger(5);
   setMood(1);

} // set-value constructor

Dog::Dog()
{

   cout << "**call to default constructor" << endl;
} // set-default constructor

// mutators
void Dog:: setName(string newName)
{
   petName = newName;
   }
// accessor
string Dog::getBreed()
{
   return dogBreed;
}

string Dog::getFood()
{
   return favFood;
}

string Dog::getMovement()
{
   return movement;
}

void Dog::printDesc()
{

}

void Dog::makeSound()
{

   cout << "Woof!Woof" << endl;
}

void Dog:: drawPic()
{
   cout << "Dog:"<< getName() << endl;
   cout << "            __" << endl;
   cout << "(\\,--------'()'--o" << endl;
   cout <<"  (_    ___    /~\"" <<endl;
   cout <<"   (_)_)  (_)_)" << endl;
   cout << endl;

}



void Dog:: describePet()
{
    cout << "This pet is a Bird." << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Breed: " << getBreed() << endl;
    cout << "Favorite Food: " << getFood() << endl;
    cout << "Movement: " << getMovement() << endl;
    cout << "Mood(1 is depressed, 10 is high/really Happy): " << getMood() << endl;

}


void Dog:: eat()
{
    cout << getName() << "the dog is "<< getMovement() << endl;
   cout << "Hunger will decrease by one" << endl;

 if (getHunger() > 0)
   setHunger(getHunger() -1);
 else
   setHunger(0);
}

void Dog:: play()
{
   int currentMood;
      cout << getName() << " the dog is " << getMovement() << endl;
      cout << "Happiness will increase by one" << endl;
   //get current mood
   currentMood = getMood();

   //Increment the mood level
   currentMood++;

   //Set new mood level using setMood() mutator
   setMood(currentMood);

}
