import java.util.*;
class Vijay<t>
{
    t x;
    Vijay(t a)
    {
        x=a;
    }
    t getvalue()
    {
        return x;
    }
    
}
public class Main
{
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    int a=sc.nextInt();
	    Vijay<Integer>ob1=new Vijay<Integer>(a);
	    System.out.println(ob1.getvalue());
	}
}
