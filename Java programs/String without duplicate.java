import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		String withoutduplicate="";
		for(int i=0;i<s.length();i++)
		{
		    int flag=0;
		    for(int j=0;j<withoutduplicate.length();j++)
		    {
		        if(s.charAt(i)==withoutduplicate.charAt(j))
		        {
		            flag=1;
		        }
		    }
		    if(flag==0)
		    {
		        withoutduplicate+=s.charAt(i);
		    }
		}
		System.out.print(withoutduplicate);
	}
}
