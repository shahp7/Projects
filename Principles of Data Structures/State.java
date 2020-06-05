package stud;

public class State 
{
	private String iName; 
	private String iStateCapital; 
	private String iabbreviation;
	
	public static void main(String[] args) 
	{
		State c=new State(); 
		c.setName("Maryland");
		c.setStateCapital("Annapolis"); 
		c.setabbreviation("MD");
		System.out.println("State number one: " );
		System.out.println("Name: " +c.getName ());
		System.out.println("State capital: " + c.getStateCapital());
		System.out.println("Abbreviation: " + c.getabbreviation());
		
		c.setName("New Jersey");
		c.setStateCapital("Trenton"); 
		c.setabbreviation("NJ");
		System.out.println("\nState number two: " );
		System.out.println("Name: " +c.getName ());
		System.out.println("State capital: " + c.getStateCapital());
		System.out.println("Abbreviation: " + c.getabbreviation());
	}

	public State() {}
	
    public String getName() { 
        return iName; 
    } 
    
	public void setName(String iName)
	{
		this.iName = iName; 
	}
	
	public String getStateCapital() 
	{
		return iStateCapital;
	}
	public void setStateCapital(String iStateCapital)
	{
		this.iStateCapital = iStateCapital; 
	}
	
	
	public String getabbreviation() 
	{
		return iabbreviation;
	}
	public void setabbreviation(String iabbreviation)
	{
		this.iabbreviation = iabbreviation; 
	}
	
}
