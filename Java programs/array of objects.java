import java .util.*;
class Students
{
    String name="";int age=0;
    Scanner sc=new Scanner(System.in);
    void get()
    {
        System.out.print("Student_name:");name=sc.next();
        System.out.print("age:");age=sc.nextInt();
    }
    void display()
    {
        System.out.println(name+" "+age);
    }
}
public class Main
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		Students a [];
		a=new Students[3];
		for(int i=0;i<3;i++)
		{
		    a[i]=new Students();
		    a[i].get();
		    a[i].display();
		}
	}
}
