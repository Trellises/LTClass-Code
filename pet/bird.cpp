/*
  file name -- bird.cpp

  This file contais the definitions of member functions of
  Bird class
*/

// ====================== header files ======================
#include <string>                   // for string class
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;                // for standard library
#include "bird.h"


Bird::Bird(string name, string color, string breed, string food,
         string move) : Pet(name, color)
{
   birdBreed = breed;
   favFood = food;
   movement  = move;
   limbs = 4;
   setHunger(5);
   setMood(1);

} // set-value constructor

Bird::Bird()
{

   cout << "**call to default constructor" << endl;
} // set-default constructor

// mutators
void Bird:: setName(string newName)
{
   petName = newName;
   }
// accessor
string Bird::getBreed()
{
   return birdBreed;
}

string Bird::getFood()
{
   return favFood;
}

string Bird::getMovement()
{
   return movement;
}

void Bird::printDesc()
{

}

void Bird::makeSound()
{

   cout << "Chirp!Chirp!" << endl;
}

void Bird:: drawPic()
{
   cout << "Bird:"<< getName() << endl;
   cout << "   \\" << endl;
   cout << "   (o>" << endl;
   cout <<" \\_//) " << endl;
   cout <<"  \_/_)" << endl;
   cout <<"   _|_" << endl;
   cout << endl;

}



void Bird:: describePet()
{
    cout << "This pet is a Bird." << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Breed: " << getBreed() << endl;
    cout << "Favorite Food: " << getFood() << endl;
    cout << "Movement: " << getMovement() << endl;
    cout << "Mood(1 is depressed 10 is high/really Happy): " << getMood() << endl;

}


void Bird:: eat()
{
    cout << getName() << " the bird is eating " << getFood() << endl;
      cout << "Hunger will decrease by one" << endl;
 if (getHunger() > 0)
   setHunger(getHunger() -1);
 else
   setHunger(0);
}

void Bird:: play()
{
   int currentMood;
   cout << getName() << "the Bird is "<< getMovement() << endl;
   cout << "Happiness will increase by one" << endl;
   //get current mood
   currentMood = getMood();

   //Increment the mood level
   currentMood++;

   //Set new mood level using setMood() mutator
   setMood(currentMood);

}

