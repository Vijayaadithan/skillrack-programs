import java.util.*;
class Vijay
{
    int a;
    Vijay(int b)
    {
        a=b;
    }
    int get()
    {
        return a;
    }
    <T,V> void getxx(T x,V xxx)
    {
        System.out.println(x);
        System.out.println(xxx);
    }
}
public class Main
{
	public static void main(String[] args) 
	{
		Vijay ob1=new Vijay(100);
		System.out.println(ob1.get());
		ob1.getxx(3.26f,"vijayvv");
	}
}
