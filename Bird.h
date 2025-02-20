// File: Bird.h
// Author: Jacob Goldberg
// Date: February 1 2025
#include <string>
#include "Animal.h"
#ifndef BIRD_H
#define BIRD_H
using namespace std;

class Bird : public Animal {
public:
    Bird(string name, string gender, string age,
    string weight, string acquisitionDate, string acquisitionCountry,
	string trainingStatus, bool reserved, string inServiceCountry);
};

#endif // BIRD_H