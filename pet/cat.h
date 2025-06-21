#ifndef CAT
#define CAT
#include "pet.h"
#include <string>

class Cat : public Pet
{

   private:
      string catBreed;
      string favFood;
      string movement;
      int limbs;

   public:
      Cat (string name, string color, string breed, string food,
         string move);
      Cat();

         //Accessors
      string getBreed();
      string getFood();
      string getMovement();
      void describePet();
      void printDesc();
      void makeSound();
      void drawPic();
      void eat();
      void play();



};

#endif

