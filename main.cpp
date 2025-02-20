// File: main.cpp
// Author: Jacob Goldberg
// Date: February 1 2025
#include <iostream>
#include <vector>
#include "Dog.h"
#include "Monkey.h"
#include "Cat.h"
#include "Bird.h"
#include "Animal.h"

string userInput;
vector<Dog> dogList;
vector<Monkey> monkeyList;
vector<Cat> catList;
vector<Bird> birdList;
vector<Animal> animalList;

void displayMenu();
void initializeDogList();
void initializeMonkeyList();
void intakeNewAnimal();
void intakeNewDog();
void intakeNewMonkey();
void intakeNewCat();
void intakeNewBird();
void reserveAnimal();
void printAnimals();

int main() {
    // Initializes dog and monkey lists for testing purposes
    initializeDogList();
    initializeMonkeyList();

    // Displays menu options to user
    displayMenu();

    // Receives menu selection from user
    cin >> userInput;

    // Loop that displays the menu, accepts the users input,
    // and takes the appropriate action.
    while (userInput != "q") {			// While user input is not q
        if (userInput == "1") {			// When user input is 1
            intakeNewAnimal();					// Calls intake new animal method
            cout << "Enter a menu selection" << endl;
            cin >> userInput;
        }
        else if (userInput == "2") {	// When user input is 3
            reserveAnimal();			// Calls reserve animal method
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "3") {	// When user input is 4
            printAnimals();
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "4") {	// When user input is 5
            printAnimals();
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "5") {	// When user input is 6
            printAnimals();
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else {								// When user inputs invalid input
            cout << "Error: Invalid input\nEnter a menu selection" << endl;;
            cin >> userInput;
        }
    }

    cout << "Goodbye!" << endl;
    return 0;
}

void displayMenu() {
    cout << "\n\n" << endl;
    cout << "\t\t\t\tRescue Animal System Menu" << endl;
    cout << "[1] Intake a new animal" << endl;
    cout << "[2] Reserve an animal" << endl;
    cout << "[3] Print a list of all dogs" << endl;
    cout << "[4] Print a list of all monkeys" << endl;
    cout << "[5] Print a list of all animals that are not reserved" << endl;
    cout << "[q] Quit application" << endl;
    cout << endl;
    cout << "Enter a menu selection" << endl;
}

void initializeDogList() {
    Dog dog1 = Dog("Spot", "German Shepherd", "male", "1", "25.6", "05-12-2019", "United States", "intake", false, "United States");
    Dog dog2 = Dog("Rex", "Great Dane", "male", "3", "35.2", "02-03-2020", "United States", "Phase I", false, "United States");
    Dog dog3 = Dog("Bella", "Chihuahua", "female", "4", "25.6", "12-12-2019", "Canada", "in service", true, "Canada");

    dogList.push_back(dog1);
    dogList.push_back(dog2);
    dogList.push_back(dog3);
}

void initializeMonkeyList() {
    Monkey monkey1 = Monkey();
    	
    monkeyList.push_back(monkey1);
}

void intakeNewAnimal() {
    cout << "\nWhat kind of aninmal?" << endl;
    string animalType;
    cin >> animalType;
    string compare1 = "Dog";
    string compare2 = "Monkey";
    string compare3 = "Cat";
    string compare4 = "Bird";
    if ((strcasecmp(animalType.c_str(), compare1.c_str()) == 0)) {		    // When user input is dog
        intakeNewDog();		                                                // Calls intake new dog method
    }
    else if ((strcasecmp(animalType.c_str(), compare2.c_str()) == 0)) {		// When user input is monkey
        intakeNewMonkey();		                                            // Calls intake new monkey method
    }
    else if ((strcasecmp(animalType.c_str(), compare3.c_str()) == 0)) {		// When user input is cat
        intakeNewCat();		                                                // Calls intake new cat method
    }
    else if ((strcasecmp(animalType.c_str(), compare4.c_str()) == 0)) {		// When user input is bird
        intakeNewBird();		                                            // Calls intake new bird method
    }
    else {	                                                                // When user input is other
        string name;
        string gender;
        string age;
        string weight;
        string acquisitionDate;
        string acquisitionCountry;

        cout << "What is the animal's name?" << endl;
        cin >> name;
        cout << "What is the animal's gender?" << endl;
        cin >> gender;
        cout << "What is the animal's age?" << endl;
        cin >> age;
        cout << "What is the animal's weight?" << endl;
        cin >> weight;
        cout << "What is the animal's acquisition date?" << endl;
        cin >>  acquisitionDate;
        cout << "What is the animal's acquisition country?" << endl;
        cin >>  acquisitionCountry;
                                  
        if (animalList.size() > 0) {
            for(Animal animal : animalList) {
                // If animal is already in animal list
                if((strcasecmp(animal.getName().c_str(), name.c_str()) == 0) && (strcasecmp(animal.getGender().c_str(), gender.c_str()) == 0) && (strcasecmp(animal.getAge().c_str(), age.c_str()) == 0) && (strcasecmp(animal.getWeight().c_str(), weight.c_str()) == 0) && (strcasecmp(animal.getAnimalType().c_str(), animalType.c_str()) == 0) && (strcasecmp(animal.getAcquisitionDate().c_str(), acquisitionDate.c_str()) == 0) && (strcasecmp(animal.getAcquisitionLocation().c_str(), acquisitionCountry.c_str()) == 0)) {
                    cout << "\n\nThis animal is already in our system\n\n" << endl;
                    return; //returns to menu
                }
                // Else add animal to animal list
                else {
                    animalList.push_back(Animal(name, animalType, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
                    cout << "New animal added" << endl;;
                    return;	// Returns to menu
                }
            }
            }
            else {
                animalList.push_back(Animal(name, animalType, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
                cout << "New animal added" << endl;;
                return;	// Returns to menu
        }
    }
}

void intakeNewDog() {
    string name;
    string breed;
    string gender;
    string age;
    string weight;
    string acquisitionDate;
    string acquisitionCountry;

    cout << "What is the dog's name?" << endl;
    cin >> name;
    cout << "What is the dog's breed?" << endl;
    cin >> breed;
    cout << "What is the dog's gender?" << endl;
    cin >> gender;
    cout << "What is the dog's age?" << endl;
    cin >> age;
    cout << "What is the dog's weight?" << endl;
    cin >> weight;
    cout << "What is the dog's acquisition date?" << endl;
    cin >>  acquisitionDate;
    cout << "What is the dog's acquisition country?" << endl;
    cin >>  acquisitionCountry;

    if (dogList.size() > 0) {
        for(Dog dog : dogList) {
            // If dog is already in dog list
            if((strcasecmp(dog.getName().c_str(), name.c_str()) == 0) && (strcasecmp(dog.getGender().c_str(), gender.c_str()) == 0) && (strcasecmp(dog.getAge().c_str(), age.c_str()) == 0) && (strcasecmp(dog.getWeight().c_str(), weight.c_str()) == 0) && (strcasecmp(dog.getBreed().c_str(), breed.c_str()) == 0) && (strcasecmp(dog.getAcquisitionDate().c_str(), acquisitionDate.c_str()) == 0) && (strcasecmp(dog.getAcquisitionLocation().c_str(), acquisitionCountry.c_str()) == 0)) {
                cout << "\n\nThis dog is already in our system\n\n" << endl;
                return; //returns to menu
            }
            // Else add dog to dog list
            else {
                dogList.push_back(Dog(name, breed, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
                cout << "New dog added" << endl;;
                return;	// Returns to menu
            }
        }
    }
    else {
        dogList.push_back(Dog(name, breed, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
        cout << "New dog added" << endl;;
        return;	// Returns to menu
    }
}

void intakeNewMonkey() {
    string name;
    string gender;
    string age;
    string weight;
    string species;
    string tailLength;
    string height;
    string bodyLength;
    string acquisitionDate;
    string acquisitionCountry;

    cout << "What is the monkey's name?" << endl;
    cin >> name;
    cout << "What is the monkey's gender?" << endl;
    cin >> gender;
    cout << "What is the monkey's age?" << endl;
    cin >> age;
    cout << "What is the monkey's weight?" << endl;
    cin >> weight;
    cout << "What is the monkey's species?" << endl;
    cin >> species;
    // Checks if species is valid
    string compare1 = "Capuchin";
    string compare2 = "Guenon";
    string compare3 = "Macaque";
    string compare4 = "Marmoset";
    string compare5 = "Tamarin";
    while (!(strcasecmp(species.c_str(), compare1.c_str()) == 0) && !(strcasecmp(species.c_str(), compare2.c_str()) == 0) && !(strcasecmp(species.c_str(), compare3.c_str()) == 0) && !(strcasecmp(species.c_str(), compare4.c_str()) == 0) && !(strcasecmp(species.c_str(), compare5.c_str()) == 0)) {
        cout << "Error: Invalid species" << endl;
        cout << "What is the monkey's species?" << endl;
        cin >> species;
    }
    cout << "What is the monkey's tail length?" << endl;
    cin >> tailLength;
    cout << "What is the monkey's height?" << endl;
    cin >>  height;
    cout << "What is the monkey's body length?" << endl;
    cin >>  bodyLength;
    cout << "What is the monkey's acquisition date?" << endl;
    cin >>  acquisitionDate;
    cout << "What is the monkey's acquisition country?" << endl;
    cin >>  acquisitionCountry;
    if (monkeyList.size() > 0) {
        for(Monkey monkey : monkeyList) {
            // If monkey is already in monkey list
            if((strcasecmp(monkey.getName().c_str(), name.c_str()) == 0) && (strcasecmp(monkey.getGender().c_str(), gender.c_str()) == 0) && (strcasecmp(monkey.getAge().c_str(), age.c_str()) == 0) && (strcasecmp(monkey.getWeight().c_str(), weight.c_str()) == 0) && (strcasecmp(monkey.getSpecies().c_str(), species.c_str()) == 0) && (strcasecmp(monkey.getTailLength().c_str(), tailLength.c_str()) == 0) && (strcasecmp(monkey.getHeight().c_str(), height.c_str()) == 0) && (strcasecmp(monkey.getBodyLength().c_str(), bodyLength.c_str()) == 0) && (strcasecmp(monkey.getAcquisitionDate().c_str(), acquisitionDate.c_str()) == 0) && (strcasecmp(monkey.getAcquisitionLocation().c_str(), acquisitionCountry.c_str()) == 0)) {
                cout << "\n\nThis monkey is already in our system\n\n" << endl;
                return; //returns to menu
            }
            // Else add monkey to monkey list
            else {
                monkeyList.push_back(Monkey(name, species, tailLength, height, bodyLength, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
                cout << "New monkey added" << endl;;
                return;	// Returns to menu
            }
        }
    }
    else {
        monkeyList.push_back(Monkey(name, species, tailLength, height, bodyLength, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
        cout << "New monkey added" << endl;;
        return;	// Returns to menu
    }
}

void intakeNewCat() {
    string name;
    string gender;
    string age;
    string weight;
    string acquisitionDate;
    string acquisitionCountry;

    cout << "What is the cat's name?" << endl;
    cin >> name;
    cout << "What is the cat's gender?" << endl;
    cin >> gender;
    cout << "What is the cat's age?" << endl;
    cin >> age;
    cout << "What is the cat's weight?" << endl;
    cin >> weight;
    cout << "What is the cat's acquisition date?" << endl;
    cin >>  acquisitionDate;
    cout << "What is the cat's acquisition country?" << endl;
    cin >>  acquisitionCountry;

    if (catList.size() > 0) {
        for(Cat cat : catList) {
            // If cat is already in cat list
            if((strcasecmp(cat.getName().c_str(), name.c_str()) == 0) && (strcasecmp(cat.getGender().c_str(), gender.c_str()) == 0) && (strcasecmp(cat.getAge().c_str(), age.c_str()) == 0) && (strcasecmp(cat.getWeight().c_str(), weight.c_str()) == 0) && (strcasecmp(cat.getAcquisitionDate().c_str(), acquisitionDate.c_str()) == 0) && (strcasecmp(cat.getAcquisitionLocation().c_str(), acquisitionCountry.c_str()) == 0)) {
                cout << "\n\nThis cat is already in our system\n\n" << endl;
                return; //returns to menu
            }
            // Else add cat to cat list
            else {
                catList.push_back(Cat(name, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
                cout << "New cat added" << endl;;
                return;	// Returns to menu
            }
        }
    }
    else {
        catList.push_back(Cat(name, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
        cout << "New cat added" << endl;;
        return;	// Returns to menu
    }
}

void intakeNewBird() {
    string name;
    string gender;
    string age;
    string weight;
    string acquisitionDate;
    string acquisitionCountry;

    cout << "What is the bird's name?" << endl;
    cin >> name;
    cout << "What is the bird's gender?" << endl;
    cin >> gender;
    cout << "What is the bird's age?" << endl;
    cin >> age;
    cout << "What is the bird's weight?" << endl;
    cin >> weight;
    cout << "What is the bird's acquisition date?" << endl;
    cin >>  acquisitionDate;
    cout << "What is the bird's acquisition country?" << endl;
    cin >>  acquisitionCountry;

    if (birdList.size() > 0) {
        for(Bird bird : birdList) {
            // If bird is already in bird list
            if((strcasecmp(bird.getName().c_str(), name.c_str()) == 0) && (strcasecmp(bird.getGender().c_str(), gender.c_str()) == 0) && (strcasecmp(bird.getAge().c_str(), age.c_str()) == 0) && (strcasecmp(bird.getWeight().c_str(), weight.c_str()) == 0) && (strcasecmp(bird.getAcquisitionDate().c_str(), acquisitionDate.c_str()) == 0) && (strcasecmp(bird.getAcquisitionLocation().c_str(), acquisitionCountry.c_str()) == 0)) {
                cout << "\n\nThis bird is already in our system\n\n" << endl;
                return; //returns to menu
            }
            // Else add bird to bird list
            else {
                birdList.push_back(Bird(name, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
                cout << "New bird added" << endl;;
                return;	// Returns to menu
            }
        }
    }
    else {
        birdList.push_back(Bird(name, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
        cout << "New bird added" << endl;;
        return;	// Returns to menu
    }
}

void reserveAnimal() {
    cout << "Needs to be implemented." << endl;
}

void printAnimals() {
    cout << "Needs to be implemented." << endl;
    if (animalList.size() > 0) {
        for(Animal animal : animalList) {
            cout << animal.getAnimalType() + animal.getName() << endl;
        }
    }
}
