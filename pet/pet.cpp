/*
  file name -- pet.cpp

  This file contais the definitions of member functions of
  Pet class
*/

// ====================== header files ======================
#include <string>                   // for string class
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;                // for standard library
#include "pet.h"


Pet::Pet(string name, string color)
{
   petName = name;
   petColor = color;

} // set-value constructor

Pet::Pet()
{

   cout << "**call to default constructor" << endl;
} // set-default constructor

// mutators
void Pet::setHunger(int n)
{
   hunger = n;
}

void Pet::checkStatus()
{
   // Check hunger level
    if (hunger >= 3) {
        cout << petName << " is very hungry! Its hunger level is: " << hunger << endl;
    }
     else {
        cout << petName << " is not hungry. The hungry level is: " << hunger << endl;
    }

    // Check happiness level
    if (happiness >= 4) {
        cout << petName << " is very happy! Its happiness level is:" << happiness << endl;
    } else if (happiness >= 3) {
        cout << petName << " is having fun. Its happiness level is:" << happiness  << endl;
    } else {
        cout << petName << " is lonely, play with this pet. Its happiness level is: " << happiness << endl;
    }

    if (happiness < 0)
    {
       happiness = 0;

    }

    else if (happiness >= 10 )
    happiness = 10;
}


void Pet::setMood(int n)
{
   happiness = n;
}

void Pet ::makeSound()
{

}

void Pet ::describePet()
{

}

void Pet ::drawPic()
{

}
void Pet ::eat()
{

}
void Pet ::play()
{

}


// accessor
string Pet::getName()
{
   return petName;
}

string Pet::getColor()
{
   return petColor;
}

int Pet::getMood()
{
   return happiness;
}

int Pet::getHunger()
{
   return hunger;
}
