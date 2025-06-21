// Filename:   assign5.cpp
// Name: Latrell Thompson
// Class: CSCI 220 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include "dog.h"
#include "pet.h"
#include "cat.h"
#include "bird.h"
#include <iomanip>    // for output format
using namespace std;
// =============== symbolic constants ==============================
const int DECIMAL = 2;
const int WIDTH = 5;
const int EXIT = 0;

// ================== data type declarations =======================

// =================== function prototype ==========================


// this program contains variable declaration statements
// and assignment statements

int main()
{
   // data declarations
   int action , option ;

   // declare an array named petStore of 5 pet pointers
Pet *petStore[5];
   system("clear");
   // create 5 pets and assign addresses to petStore array
   petStore[0] = new Bird ("Rex", "Brown", "Parkeet", "Chips", "Flying");
   petStore[1] = new Dog ("Telly", "Blonde", "Rotty", "Pizza", "Sitting");

   petStore[2] = new Dog ("Finrir", "Black", "Yorky", "Ice-Cream", "Laying Down");

   petStore[3] = new Cat ("Taper", "White", "Siamese", "Cheese", "Jumping");

   petStore[4] = new Cat ("Gin", "Blue", "Persian", "Bone", "Runnning");

          // Ask the user for pet choice
    cout << "1. Rex\n2. Telly\n3. Finrir\n4. Taper\n5 Gin." << endl;
    cout << "Choose a pet between numebers (1-5, 0 to exit): " << endl;
    cin >> option;
   // loop while option not EXIT
   while (option != EXIT)
   {
      // pick pet number (1-5)

          // Ask the user for pet choice


    cout << "Enter what to do with pet, press 0 to exit: \n1. Feed Pet\n2. Play with Pet\n3. Check Status\n4. Draw Pet\n5. Make sound\n6. Pet Description\n";
    cin >> action;
    cout << endl;
      // pick action : feed pet, play with pet, check status of pet, draw pet


     while (action != EXIT)
{


      // pick action : feed pet, play with pet, check status of pet, draw pet

        if (action == 1)
      // feed pet
      //    display message: petName is eating + favorite food
      //    decrease hunger points
      //    print description of pet
         petStore [option -1] -> eat();




       if (action ==2)
 // play with pet
      //    display message: petName is playing by + movement
      //    increase mood/happiness points
      //    print description of pet
      petStore [option-1] ->play();

      if (action ==3)
       // check status
      //    if hunger is 3 or higher , display petName, " feed this animal "
      //          else display petName + " hunger is OK "
      //    if mood is 3 or higher,  display petName , " having fun "
      //          else display petName + " is lonely , play with this pet"
       petStore [option-1] ->checkStatus();

      if (action ==4)
      // draw pet
      //       display an ASCII image of the pet


        petStore [option-1] ->drawPic();
      // get next option

      if (action ==5)
      //Sound of animal
      petStore [option-1] -> makeSound();

      if (action ==6)
      //Sound of animal
      petStore [option-1] -> describePet();





        // Ask the user for pet choice
    cout << "1. Rex\n2. Telly\n3. Finrir\n4. Taper\n5 Gin." << endl;
    cout << "Choose a pet between numbers (1-5, 0 to exit): " << endl;
    cin >> option;


    cout << "Enter what to do with pet, press 0 to exit: \n1. Feed Pet\n2. Play with Pet\n3. Check Status\n4. Draw Pet\n5. Make sound\n6. Pet Description\n";
    cin >> action;
    cout << endl;





}

}
   return 0;
}// end main








