#ifndef PET
#define PET

#include <string>
using namespace std;


class Pet
{
    protected:
        string petName;
        string petColor;
        int hunger;
        int happiness;

    public:
        Pet(string name, string color);
        Pet();
        virtual void makeSound() = 0;
        virtual void describePet() = 0;
        virtual void drawPic();
        virtual void eat() = 0;
        virtual void play() = 0;

        void checkStatus();
        //Mutator
        void setHunger(int n);
        void setMood(int n);
        //Accessors
        string getName();
        string getColor();
        int getMood();
        int getHunger();



};

#endif
