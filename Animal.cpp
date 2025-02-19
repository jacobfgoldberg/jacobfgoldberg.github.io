// File: Animal.cpp
// Author: Jacob Goldberg
// Date: January 26 2025
#include <string>
#include "Animal.h"
using namespace std;

Animal::Animal() {

}

string Animal::getName() {
    return name;
}

void Animal::setName(string name) {
    this->name = name;
}

string Animal::getAnimalType() {
    return animalType;
}

void Animal::setAnimalType(string animalType) {
    this->animalType = animalType;
}

string Animal::getGender() {
    return gender;
}

void Animal::setGender(string gender) {
    this->gender = gender;
}

string Animal::getAge() {
    return age;
}

void Animal::setAge(string age) {
    this->age = age;
}

string Animal::getWeight() {
    return weight;
}

void Animal::setWeight(string weight) {
    this->weight = weight;
}

string Animal::getAcquisitionDate() {
    return acquisitionDate;
}

void Animal::setAcquisitionDate(string acquisitionDate) {
    this->acquisitionDate = acquisitionDate;
}

string Animal::getAcquisitionLocation() {
    return acquisitionCountry;
}

void Animal::setAcquisitionLocation(string acquisitionCountry) {
    this->acquisitionCountry = acquisitionCountry;
}

bool Animal::getReserved() {
    return reserved;
}

void Animal::setReserved(bool reserved) {
    this->reserved = reserved;
}

string Animal::getInServiceLocation() {
    return inServiceCountry;
}

void Animal::setInServiceCountry(string inServiceCountry) {
    this->inServiceCountry = inServiceCountry;
}

string Animal::getTrainingStatus() {
    return trainingStatus;
}

void Animal::setTrainingStatus(string trainingStatus) {
    this->trainingStatus = trainingStatus;
}

