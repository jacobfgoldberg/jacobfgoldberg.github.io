// File: Cat.cpp
// Author: Jacob Goldberg
// Date: Febrary 1 2025
#include <string>
#include "Cat.h"
using namespace std;

Cat::Cat(string name, string gender, string age,
string weight, string acquisitionDate, string acquisitionCountry,
string trainingStatus, bool reserved, string inServiceCountry) {
    setName(name);
    setGender(gender);
    setAge(age);
    setWeight(weight);
    setAcquisitionDate(acquisitionDate);
    setAcquisitionLocation(acquisitionCountry);
    setTrainingStatus(trainingStatus);
    setReserved(reserved);
    setInServiceCountry(inServiceCountry);
}
