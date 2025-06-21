#ifndef DOG
#define DOG
#include "pet.h"
#include <string>

class Dog : public Pet
{

   private:
      string dogBreed;
      string favFood;
      string movement;
      int limbs;

   public:
       Dog (string name, string color, string breed, string food,
         string move);
      Dog();

         //Accessors
      string getBreed();
      string getFood();
      string getMovement();

      void makeSound();
      void drawPic();
      void describePet();
      void eat();
      void play();
      void printDesc();
      //Mutator
      void setName(string);


};

#endif


