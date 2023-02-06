/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
class Student
{
    String name;
    long regno;
    Scanner sc=new Scanner(System.in);
    void get()
        {
        System.out.print("Enter Name:");
        name=sc.next();
        System.out.print("Enter Regno:");
        regno=sc.nextLong();
    }
    void display()
    {
        System.out.println("Name:"+name);
        System.out.println("Regno:"+ regno);
    }
    
}
public class Main
{
	public static void main(String[] args)
	{
	    Student a=new Student();
	    a.get();
	    a.display();
		
	}
}
