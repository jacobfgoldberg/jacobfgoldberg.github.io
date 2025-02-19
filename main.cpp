// File: main.cpp
// Author: Jacob Goldberg
// Date: January 26 2025
#include <iostream>
#include <vector>
#include "Dog.h"
#include "Monkey.h"
#include "Animal.h"

string userInput;
vector<Dog> dogList;
vector<Monkey> monkeyList;

void displayMenu();
void initializeDogList();
void initializeMonkeyList();
void intakeNewDog();
void intakeNewMonkey();
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
    cout << userInput << endl;

    // Loop that displays the menu, accepts the users input,
    // and takes the appropriate action.
    while (userInput != "q") {			// While user input is not q
        if (userInput == "1") {			// When user input is 1
            intakeNewDog();					// Calls intake new dog method
            cout << "Enter a menu selection" << endl;
            cin >> userInput;
        }
        else if (userInput == "2") {	// When user input is 2
            intakeNewMonkey();			// Calls intake new monkey method
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "3") {	// When user input is 3
            reserveAnimal();			// Calls reserve animal method
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "4") {	// When user input is 4
            printAnimals();
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "5") {	// When user input is 5
            printAnimals();
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "6") {	// When user input is 6
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
    cout << "[1] Intake a new dog" << endl;
    cout << "[2] Intake a new monkey" << endl;
    cout << "[3] Reserve an animal" << endl;
    cout << "[4] Print a list of all dogs" << endl;
    cout << "[5] Print a list of all monkeys" << endl;
    cout << "[6] Print a list of all animals that are not reserved" << endl;
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

void intakeNewDog() {
    cout << "What is the dog's name?" << endl;
    string name;
    cin >> name;

    for(Dog dog : dogList) {
        if(strcasecmp((dog.getName()).c_str(), name.c_str()) == 0) {
            cout << "\n\nThis dog is already in our system\n\n" << endl;
            return; 
        }
    }

    // Add the code to instantiate a new dog and add it to the appropriate list
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

void reserveAnimal() {
    cout << "Needs to be implemented." << endl;
}

void printAnimals() {
    cout << "Needs to be implemented." << endl;
}

