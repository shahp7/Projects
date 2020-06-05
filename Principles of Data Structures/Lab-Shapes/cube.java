package cl02;

public class cube
{
	private int iLength; 
	private int iWidth;
	private int iHeight;
	private int iVolume; 
	public static void main(String[] args)
	{
		cube c=new cube();
		System.out.println("length: " +c.getLength());
		System.out.println("width: " +c.getWidth());
		System.out.println("height: " +c.getHeight());
		System.out.println("volume: " +c.getVolume());
		
		c.setHeight(10);
		c.setLength(20);    
		c.setWidth(30); 
		System.out.println("length: " +c.getLength());
		System.out.println("width: " +c.getWidth());
		System.out.println("height: " +c.getHeight());
		System.out.println("volume: " +c.getVolume());
		
		cube c2=new cube(5, 3, 2);
		System.out.println("length: " +c2.getLength());
		System.out.println("width: " +c2.getWidth());
		System.out.println("height: " +c2.getHeight());
		System.out.println("volume: " +c2.getVolume());
		
	}
	
	public cube() {}
	
	public cube(int iLength, int iWidth, int iHeight) 
	{
		this.iLength=iLength;
		this.iWidth=iWidth;
		this.iHeight=iHeight;
	}
	
	public int getLength()
	{
		return this.iLength; 
	}
	
	public int getWidth()
	{
		return this.iWidth; 
	}
	public int getHeight()
	{
		return this.iHeight; 
	}
	public int getVolume()
	{
		return this.iHeight * this.iLength * this.iWidth; 
	}
	public void setLength(int iLength)
	{
		this.iLength=iLength;
	}
	public void setWidth(int iWidth)
	{
		this.iWidth=iWidth;
	}
	public void setHeight(int iHeight)
	{
		this.iHeight=iHeight;
	}
	public String toString()
	{
		return "volume: " +this.getVolume();
	}
}