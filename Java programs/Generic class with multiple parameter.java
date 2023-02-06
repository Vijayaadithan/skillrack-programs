import java.util.*;
class Vijay<t,v>
{
    t x;
    v y;
    Vijay(t a,v b)
    {
        x=a;
        y=b;
    }
    t getvalue()
    {
        return x;
        
    }
    v get()
    {
        return y;
    }
    
}
public class Main
{
	public static void main(String[] args) 
	{
	    Vijay<Integer,String>ob1=new Vijay<Integer,String>(56,"Vedha");
	    System.out.println(ob1.getvalue());
	     System.out.println(ob1.get());
	}
}
