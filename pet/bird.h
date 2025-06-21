#ifndef BIRD
#define BIRD
#include "pet.h"
#include <string>

class Bird : public Pet
{

   private:
      string birdBreed;
      string favFood;
      string movement;
      int limbs;

   public:
       Bird (string name, string color, string breed, string food,
         string move);
      Bird();

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



