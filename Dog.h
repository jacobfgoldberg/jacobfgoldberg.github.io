// File: Dog.h
// Author: Jacob Goldberg
// Date: January 26 2025
#include <string>
#include "Animal.h"
#ifndef DOG_H
#define DOG_H
using namespace std;

class Dog : public Animal {
public:
    Dog(string name, string breed, string gender, string age,
    string weight, string acquisitionDate, string acquisitionCountry,
	string trainingStatus, bool reserved, string inServiceCountry);

    string getBreed();

    void setBreed(string dogBreed);

private:
    string breed;

};

#endif // DOG_H