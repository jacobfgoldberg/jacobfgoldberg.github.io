// File: Dog.cpp
// Author: Jacob Goldberg
// Date: January 26 2025
#include <string>
#include "Dog.h"
using namespace std;

Dog::Dog(string name, string breed, string gender, string age,
string weight, string acquisitionDate, string acquisitionCountry,
string trainingStatus, bool reserved, string inServiceCountry) {
    setName(name);
    setBreed(breed);
    setGender(gender);
    setAge(age);
    setWeight(weight);
    setAcquisitionDate(acquisitionDate);
    setAcquisitionLocation(acquisitionCountry);
    setTrainingStatus(trainingStatus);
    setReserved(reserved);
    setInServiceCountry(inServiceCountry);
}

string Dog::getBreed() {
    return breed;
}

void Dog::setBreed(string dogBreed) {
    breed = dogBreed;
}
