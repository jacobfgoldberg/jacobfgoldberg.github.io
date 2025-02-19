import java.util.ArrayList;
import java.util.Scanner;

public class Driver {
	// First scanner
    static Scanner scnr = new Scanner(System.in);
    
    // Second scanner
    static Scanner scnr2 = new Scanner(System.in);
    
    // Variable for user input initialized to empty
    private static String userInput = "";
	
    private static ArrayList<Dog> dogList = new ArrayList<Dog>();
    
    // Monkey array list
    private static ArrayList<Monkey> monkeyList = new ArrayList<Monkey>();

    public static void main(String[] args) {
        initializeDogList();
        initializeMonkeyList();
        
        displayMenu();					// Initial displaying of menu
        userInput = scnr.next();		// Initial recieving of user input

        // Loop that displays the menu, accepts the users input
        // and takes the appropriate action.
        while (!userInput.equals("q")) {			// While user input is not q
        	if (userInput.equals("1")) {			// When user input is 1
        		intakeNewDog(scnr2);					// Calls intake new dog method
        		System.out.println("Enter a menu selection");
    			userInput = scnr.next();
        	}
        		else if (userInput.equals("2")) {	// When user input is 2
        			intakeNewMonkey(scnr2);			// Calls intake new monkey method
        			System.out.println("Enter a menu selection");
        			userInput = scnr.next();
        		}
        		else if (userInput.equals("3")) {	// When user input is 3
        			reserveAnimal(scnr2);			// Calls reserve animal method
        			System.out.println("Enter a menu selection");
        			userInput = scnr.next();
        		}
        		else if (userInput.equals("4")) {	// When user input is 4
        			printAnimals();
        			System.out.println("Enter a menu selection");
        			userInput = scnr.next();
        		}
        		else if (userInput.equals("5")) {	// When user input is 5
        			printAnimals();
        			System.out.println("Enter a menu selection");
        			userInput = scnr.next();
        		}
        		else if (userInput.equals("6")) {	// When user input is 6
        			printAnimals();
        			System.out.println("Enter a menu selection");
        			userInput = scnr.next();
        		}
        		else {								// When user inputs invalid input
        			System.out.println("Error: Invalid input\nEnter a menu selection");
        			userInput = scnr.next();
        		}
        }
        
        // Ends the program
        System.out.print("Goodbye");
        System.exit(0);
    }

    // This method prints the menu options
    public static void displayMenu() {
        System.out.println("\n\n");
        System.out.println("\t\t\t\tRescue Animal System Menu");
        System.out.println("[1] Intake a new dog");
        System.out.println("[2] Intake a new monkey");
        System.out.println("[3] Reserve an animal");
        System.out.println("[4] Print a list of all dogs");
        System.out.println("[5] Print a list of all monkeys");
        System.out.println("[6] Print a list of all animals that are not reserved");
        System.out.println("[q] Quit application");
        System.out.println();
        System.out.println("Enter a menu selection");
    }


    // Adds dogs to a list for testing
    public static void initializeDogList() {
        Dog dog1 = new Dog("Spot", "German Shepherd", "male", "1", "25.6", "05-12-2019", "United States", "intake", false, "United States");
        Dog dog2 = new Dog("Rex", "Great Dane", "male", "3", "35.2", "02-03-2020", "United States", "Phase I", false, "United States");
        Dog dog3 = new Dog("Bella", "Chihuahua", "female", "4", "25.6", "12-12-2019", "Canada", "in service", true, "Canada");

        dogList.add(dog1);
        dogList.add(dog2);
        dogList.add(dog3);
    }


    // Adds monkeys to a list for testing
    //Optional for testing
    public static void initializeMonkeyList() {
    	Monkey monkey1 = new Monkey();
    	
    	monkeyList.add(monkey1);
    }


    // Complete the intakeNewDog method
    // The input validation to check that the dog is not already in the list
    // is done for you
    public static void intakeNewDog(Scanner scanner) {
        System.out.println("What is the dog's name?");
        String name = scanner.nextLine();
        for(Dog dog: dogList) {
            if(dog.getName().equalsIgnoreCase(name)) {
                System.out.println("\n\nThis dog is already in our system\n\n");
                return; //returns to menu
            }
        }

        // Add the code to instantiate a new dog and add it to the appropriate list
    }

        public static void intakeNewMonkey(Scanner scanner) {
            System.out.println("What is the monkey's name?");
            String name = scanner.nextLine();
            System.out.println("What is the monkey's gender?");
            String gender = scanner.nextLine();
            System.out.println("What is the monkey's age?");
            String age = scanner.nextLine();
            System.out.println("What is the monkey's weight?");
            String weight = scanner.nextLine();
            System.out.println("What is the monkey's species?");
            String species = scanner.nextLine();
            // Checks if species is valid
            while (!species.equalsIgnoreCase("Capuchin") && !species.equalsIgnoreCase("Guenon") && !species.equalsIgnoreCase("Macaque") && !species.equalsIgnoreCase("Marmoset") && !species.equalsIgnoreCase("squirrel monkey") && !species.equalsIgnoreCase("Tamarin")) {
            	System.out.println("Error: Invalid species");
            	System.out.println("What is the monkey's species?");
                species = scanner.nextLine();
            }
            System.out.println("What is the monkey's tail length?");
            String tailLength = scanner.nextLine();
            System.out.println("What is the monkey's height?");
            String height = scanner.nextLine();
            System.out.println("What is the monkey's body length?");
            String bodyLength = scanner.nextLine();
            System.out.println("What is the monkey's acquisition date?");
            String acquisitionDate = scanner.nextLine();
            System.out.println("What is the monkey's acquisition country?");
            String acquisitionCountry = scanner.nextLine();
            if (monkeyList.size() > 0) {
            	for(Monkey monkey: monkeyList) {
            		// If monkey is already in monkey list
            		if(monkey.getName().equalsIgnoreCase(name) && monkey.getGender().equalsIgnoreCase(gender) && (monkey.getAge().equalsIgnoreCase(age)) && (monkey.getWeight().equalsIgnoreCase(weight)) && (monkey.getSpecies().equalsIgnoreCase(species)) && (monkey.getTailLength().equalsIgnoreCase(tailLength)) && (monkey.getHeight().equalsIgnoreCase(height)) && (monkey.getBodyLength().equalsIgnoreCase(bodyLength)) && (monkey.getAcquisitionDate().equalsIgnoreCase(acquisitionDate)) && (monkey.getAcquisitionLocation().equalsIgnoreCase(acquisitionCountry))) {
            			System.out.println("\n\nThis monkey is already in our system\n\n");
            			return; //returns to menu
            		}
            		// Else add monkey to monkey list
            		else {
            			monkeyList.add(new Monkey(name, species, tailLength, height, bodyLength, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
            			System.out.println("New monkey added");
            			return;	// Returns to menu
            		}
            	}
            }
            else {
            	monkeyList.add(new Monkey(name, species, tailLength, height, bodyLength, gender, age, weight, acquisitionDate, acquisitionCountry, "intake", false, acquisitionCountry));
    			System.out.println("New monkey added");
    			return;	// Returns to menu
            }
        }

        // Complete reserveAnimal
        // You will need to find the animal by animal type and in service country
        public static void reserveAnimal(Scanner scanner) {
            System.out.println("The method reserveAnimal needs to be implemented");

        }

        // Complete printAnimals
        // Include the animal name, status, acquisition country and if the animal is reserved.
	// Remember that this method connects to three different menu items.
        // The printAnimals() method has three different outputs
        // based on the listType parameter
        // dog - prints the list of dogs
        // monkey - prints the list of monkeys
        // available - prints a combined list of all animals that are
        // fully trained ("in service") but not reserved 
	// Remember that you only have to fully implement ONE of these lists. 
	// The other lists can have a print statement saying "This option needs to be implemented".
	// To score "exemplary" you must correctly implement the "available" list.
        public static void printAnimals() {
            System.out.println("The method printAnimals needs to be implemented");

        }
}

