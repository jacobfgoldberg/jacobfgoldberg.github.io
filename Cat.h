// File: Cat.h
// Author: Jacob Goldberg
// Date: February 1 2025
#include <string>
#include "Animal.h"
#ifndef CAT_H
#define CAT_H
using namespace std;

class Cat : public Animal {
public:
    Cat(string name, string gender, string age,
    string weight, string acquisitionDate, string acquisitionCountry,
	string trainingStatus, bool reserved, string inServiceCountry);
};

#endif // CAT_H