// File: Monkey.h
// Author: Jacob Goldberg
// Date: January 26 2025
#include <string>
#include "Animal.h"
#ifndef MONKEY_H
#define MONKEY_H
using namespace std;

class Monkey : public Animal {
public:
    Monkey();

    Monkey(string name, string species, string tailLength, string height, string bodyLength, string gender, string age,
    string weight, string acquisitionDate, string acquisitionCountry,
	string trainingStatus, bool reserved, string inServiceCountry);

    void setTailLength(string length);
    
    string getTailLength();
    
    void setHeight(string monkeyHeight);
    
    string getHeight();
    
    void setBodyLength(string length);
    
    string getBodyLength();
    
    void setSpecies(string monkeySpecies);
    
    string getSpecies();

private:
    string tailLength;
	string height;
	string bodyLength;
	string species;

};

#endif // MONKEY_H