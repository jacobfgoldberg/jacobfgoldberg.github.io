// File: main.cpp
// Author: Jacob Goldberg
// Date: February 1 2025
#include <iostream>
#include <vector>
#include <sqlite3.h>
using namespace std;

string userInput;
sqlite3* db;
sqlite3_stmt* stmt;

void displayMenu();
void initializeDogs();
void initializeMonkeys();
void intakeNewAnimal();
void reserveAnimal();
void printAnimals();
void printDogs();
void printMonkeys();

// Function for printing data from database
int callback(void* unused, int numColumns, char** data, char** column) {
    for (int i = 0; i < numColumns; i++) {
        cout << column[i] << ": " << (data[i] ? data[i] : "NULL") << endl;
    }
    return 0;
}

int main() {
    // Connects to database
    sqlite3_open("test.db", &db);

    sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS animals ("
                     "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                     "name TEXT, "
                     "animalType TEXT NOT NULL, "
                     "gender TEXT, "
                     "age TEXT, "
                     "weight TEXT, "
                     "acquisitionDate TEXT, "
                     "acquisitionCountry TEXT, "
                     "trainingStatus TEXT, "
                     "reserved INTEGER DEFAULT 0, "
                     "inServiceCountry TEXT, "
                     "breed TEXT, "
                     "tailLength TEXT, "
                     "height TEXT, "
                     "bodyLength TEXT, "
                     "species TEXT);",
                 NULL, 0, NULL);

    // Initializes dog and monkey lists for testing purposes
    initializeDogs();
    initializeMonkeys();

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
            printDogs();
            cout << "Enter a menu selection";
            cin >> userInput;
        }
        else if (userInput == "4") {	// When user input is 5
            printMonkeys();
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
    sqlite3_close(db);
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

void initializeDogs() {
    // Adds a dog to the database
    sqlite3_exec(db, "INSERT INTO animals (name, animalType, breed, gender, age, weight, acquisitionDate, acquisitionCountry, trainingStatus, reserved, inServiceCountry) VALUES ('Spot', 'Dog', 'German Shepherd', 'male', '1', '25.6', '05-12-2019', 'United States', 'intake', 0, 'United States');", NULL, 0, NULL);
    
}

void initializeMonkeys() {
    // Adds a monkey to the database
    sqlite3_exec(db, "INSERT INTO animals (name, animalType, gender, age, weight, acquisitionDate, acquisitionCountry, trainingStatus, reserved, inServiceCountry, tailLength, height, bodyLength, species) VALUES ('NoName', 'Monkey', 'male', '1', '25.6', '05-12-2019', 'United States', 'intake', 0, 'United States', '13', '12', '7', 'Marmoset');", NULL, 0, NULL);
}

void intakeNewAnimal() {
    string animalType;
    string name;
    string gender;
    string age;
    string weight;
    string acquisitionDate;
    string acquisitionCountry;
    string breed;
    string tailLength;
	string height;
	string bodyLength;
	string species;

    cout << "\nWhat kind of aninmal?" << endl;
    cin >> animalType;
    cout << "What is the " << animalType << "'s name?" << endl;
    cin >> name;
    cout << "What is the " << animalType << "'s gender?" << endl;
    cin >> gender;
    cout << "What is the " << animalType << "'s age?" << endl;
    cin >> age;
    cout << "What is the " << animalType << "'s weight?" << endl;
    cin >> weight;
    cout << "What is the " << animalType << "'s acquisition date?" << endl;
    cin >>  acquisitionDate;
    cout << "What is the " << animalType << "'s acquisition country?" << endl;
    cin >>  acquisitionCountry;

    string compare1 = "Dog";
    string compare2 = "Monkey";

    if ((strcasecmp(animalType.c_str(), compare1.c_str()) == 0)) {		    // When user input is dog
        cout << "What is the " << animalType << "'s breed?" << endl;
        cin >>  breed;   

        string sql = "INSERT INTO animals (name, animalType, gender, age, weight, acquisitionDate, "
                      "acquisitionCountry, trainingStatus, inServiceCountry, breed) "
                      "VALUES (?, ?, ?, ?, ?, ?, ?, 'intake', ?, ?);";
        sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, NULL);
        sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, animalType.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 3, gender.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 4, age.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 5, weight.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 6, acquisitionDate.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 7, acquisitionCountry.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 8, acquisitionCountry.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 9, breed.c_str(), -1, SQLITE_STATIC);

        sqlite3_step(stmt);
        sqlite3_finalize(stmt);

        cout << "New animal added" << endl;;
        return;	// Returns to menu                                         
    }
    else if ((strcasecmp(animalType.c_str(), compare2.c_str()) == 0)) {		// When user input is monkey
        cout << "What is the " << animalType << "'s tailLength?" << endl;
        cin >>  tailLength; 
        cout << "What is the " << animalType << "'s height?" << endl;
        cin >>  height; 
        cout << "What is the " << animalType << "'s bodyLength?" << endl;
        cin >>  bodyLength; 
        cout << "What is the " << animalType << "'s species?" << endl;
        cin >>  species; 	   

        string sql = "INSERT INTO animals (name, animalType, gender, age, weight, acquisitionDate, "
                      "acquisitionCountry, trainingStatus, inServiceCountry, tailLength, height, bodyLength, species) "
                      "VALUES (?, ?, ?, ?, ?, ?, ?, 'intake', ?, ?, ?, ?, ?);";
        sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, NULL);
        sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, animalType.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 3, gender.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 4, age.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 5, weight.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 6, acquisitionDate.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 7, acquisitionCountry.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 8, acquisitionCountry.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 9, tailLength.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 10, height.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 11, bodyLength.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 12, species.c_str(), -1, SQLITE_STATIC);

        sqlite3_step(stmt);
        sqlite3_finalize(stmt);

        cout << "New animal added" << endl;;
        return;	// Returns to menu                                       
    }
    else {
        string sql = "INSERT INTO animals (name, animalType, gender, age, weight, acquisitionDate, "
                      "acquisitionCountry, trainingStatus, inServiceCountry) "
                      "VALUES (?, ?, ?, ?, ?, ?, ?, 'intake', ?);";
        sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, NULL);
        sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, animalType.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 3, gender.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 4, age.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 5, weight.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 6, acquisitionDate.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 7, acquisitionCountry.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 8, acquisitionCountry.c_str(), -1, SQLITE_STATIC);

        sqlite3_step(stmt);
        sqlite3_finalize(stmt);

        cout << "New animal added" << endl;;
        return;	// Returns to menu
    }
}

void reserveAnimal() {
    cout << "Needs to be implemented." << endl;
}

void printAnimals() {
    // Prints list of all animals in database
    sqlite3_exec(db, "SELECT * FROM animals;", callback, 0, NULL);
}

void printDogs() {
    // Prints list of all dogs in database
    sqlite3_exec(db, "SELECT * FROM animals WHERE LOWER(animalType) = 'dog';", callback, 0, NULL);
}

void printMonkeys() {
    // Prints list of all monkeys in database
    sqlite3_exec(db, "SELECT * FROM animals WHERE LOWER(animalType) = 'monkey';", callback, 0, NULL);
}
