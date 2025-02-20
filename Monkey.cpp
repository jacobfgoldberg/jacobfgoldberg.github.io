// File: Monkey.cpp
// Author: Jacob Goldberg
// Date: January 26 2025
#include <string>
#include "Monkey.h"
using namespace std;

Monkey::Monkey() {
    setName("NoName");						// Default value
    setSpecies("NoSpecies");				// Default value
    setTailLength("-1");					// Default value
    setHeight("-1");						// Default value
    setBodyLength("-1");					// Default value
    setGender("NoGender");					// Default value
    setAge("-1");							// Default value
    setWeight("-1");						// Default value
    setAcquisitionDate("NoDate");			// Default value
    setAcquisitionLocation("NoLocation");	// Default value
    setTrainingStatus("intake");			// Default value
    setReserved(false);						// Default value
    setInServiceCountry("NoLocation");		// Default value
}

Monkey::Monkey(string name, string species, string tailLength, string height, string bodyLength, string gender, string age,
    string weight, string acquisitionDate, string acquisitionCountry,
	string trainingStatus, bool reserved, string inServiceCountry) {
    setName(name);
    setSpecies(species);
    setTailLength(tailLength);
    setHeight(height);
    setBodyLength(bodyLength);
    setGender(gender);
    setAge(age);
    setWeight(weight);
    setAcquisitionDate(acquisitionDate);
    setAcquisitionLocation(acquisitionCountry);
    setTrainingStatus(trainingStatus);
    setReserved(reserved);
    setInServiceCountry(inServiceCountry);
}

void Monkey::setTailLength(string length) {
    tailLength = length;
}

string Monkey::getTailLength() {
    return tailLength;
}

void Monkey::setHeight(string monkeyHeight) {
    height = monkeyHeight;
}

string Monkey::getHeight() {
    return height;
}

void Monkey::setBodyLength(string length) {
    bodyLength = length;
}

string Monkey::getBodyLength() {
    return bodyLength;
}

void Monkey::setSpecies(string monkeySpecies) {
    species = monkeySpecies;
}

string Monkey::getSpecies() {
    return species;
}
