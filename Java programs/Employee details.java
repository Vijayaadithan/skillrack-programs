import java.util.*;
class Employee
{
    String name;
    int id;
    int salary;
    float da=0,hra=0,gsalary=0;
    Scanner sc=new Scanner(System.in);
    void get()
    {
        System.out.print("Enter name:");
        name=sc.nextLine();
        System.out.print("Enter id:");
        id=sc.nextInt();
        System.out.print("Enter salary:");
        salary=sc.nextInt();
        
    }
    void calculate()
    {
        da=(salary*12)/100;
        hra=(salary*3)/100;
        gsalary=da+hra;
        
    }
    void display()
    {
        System.out.println("Name:"+name);
        System.out.println("ID:"+id);
        System.out.println("Salary:"+salary);
        System.out.println("DA:"+da);
        System.out.println("HRA:"+hra);
        System.out.println("GROSSSALARY:"+gsalary);
    }
}
public class Main
{
	public static void main(String[] args) 
	{
		Employee s1=new Employee();
		s1.get();
		s1.calculate();
		Employee s2=new Employee();
		s2.get();
		s2.calculate();
		s1.display();
		s2.display();
	}
}
