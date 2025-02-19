
public class Monkey extends RescueAnimal {
	
	// Instance variables
	private String tailLength;
	private String height;
	private String bodyLength;
	private String species;
	
	// Default constructor
	public Monkey() {
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
	
    // Constructor
    public Monkey(String name, String species, String tailLength, String height, String bodyLength, String gender, String age,
    String weight, String acquisitionDate, String acquisitionCountry,
	String trainingStatus, boolean reserved, String inServiceCountry) {
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
        
    // Sets monkey tail length
    public void setTailLength(String length) {
    	tailLength = length;
    }
    
    // Gets monkey tail length
    public String getTailLength() {
    	return tailLength;
    }
    
    // Sets monkey height
    public void setHeight(String monkeyHeight) {
    	height = monkeyHeight;
    }
    
    // Gets monkey height
    public String getHeight() {
    	return height;
    }
    
    // Sets monkey body length
    public void setBodyLength(String length) {
    	bodyLength = length;
    }
    
    // Gets monkey body length
    public String getBodyLength() {
    	return bodyLength;
    }
    
    // Sets monkey species
    public void setSpecies(String monkeySpecies) {
    	species = monkeySpecies;
    }
    
    // Gets monkey species
    public String getSpecies() {
    	return species;
    }
    
}
