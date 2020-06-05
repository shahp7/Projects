package stud;

public class student 
{

	private String iName; 
	private int iAge;
	private boolean iIsEngineeringMajor; 
	private char iGender; 
	
	public static void main(String[] args)
	{
		student c=new student(); 
		c.setName("Poonam");
		c.setAge(21); 
	c.setIsEngineeringMajor(true);
		c.setGender('F');
		System.out.println("Student number one: " );
		System.out.println("Name: " +c.getName ());
		System.out.println("Age: " + c.getAge());
		System.out.println("Is Engineering Major: " + c.getIsEngineeringMajor());
		System.out.println("Gender: " + c.getGender());
		
		c.setName("Alex");
		c.setAge(18); 
		c.setIsEngineeringMajor(false);
		c.setGender('M');

		System.out.println("\nStudent number two: " );
		System.out.println("Name: " +c.getName ());
		System.out.println("Age: " + c.getAge());
		System.out.println("Is Engineering Major: " + c.getIsEngineeringMajor());
		System.out.println("Gender: " + c.getGender());
	}
	
	public student() {}
    public String getName() { 
        return iName; 
    } 
    
	public void setName(String iName)
	{
		this.iName = iName; 
	}
	
	public int getAge() 
	{
		return iAge;
	}
	public void setAge(int iAge)
	{
		this.iAge = iAge; 
	}
	
	public boolean getIsEngineeringMajor() 
	{
		return iIsEngineeringMajor;
	}
	public void setIsEngineeringMajor(boolean iIsEngineeringMajor)
	{
		this.iIsEngineeringMajor = iIsEngineeringMajor; 
	}
	
	public char getGender() 
	{
		return iGender;
	}
	public void setGender(char iGender)
	{
		this.iGender = iGender; 
	}
	
}

