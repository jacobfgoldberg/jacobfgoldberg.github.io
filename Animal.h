// File: Animal.h
// Author: Jacob Goldberg
// Date: January 26 2025
#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal {
public:
    Animal();
	
	Animal(string name, string animalType, string gender, string age,
    string weight, string acquisitionDate, string acquisitionCountry,
	string trainingStatus, bool reserved, string inServiceCountry);

	string getName();

	void setName(string name);

	string getAnimalType();

	void setAnimalType(string animalType);

	string getGender();

	void setGender(string gender);

	string getAge();

	void setAge(string age);

	string getWeight();

	void setWeight(string weight);

	string getAcquisitionDate();

	void setAcquisitionDate(string acquisitionDate);

	string getAcquisitionLocation();

	void setAcquisitionLocation(string acquisitionCountry);

	bool getReserved();

	void setReserved(bool reserved);

	string getInServiceLocation();

	void setInServiceCountry(string inServiceCountry);

	string getTrainingStatus();

	void setTrainingStatus(string trainingStatus);

private:
    string name;
    string animalType;
    string gender;
    string age;
    string weight;
    string acquisitionDate;
    string acquisitionCountry;
	string trainingStatus;
    bool reserved;
	string inServiceCountry;

};

#endif // ANIMAL_H