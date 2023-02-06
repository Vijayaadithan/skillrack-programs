import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    String s=sc.next();
	    char a[]=s.toCharArray();
	    int count[]=new int[128];
	    for(int i=0;i<a.length;i++)
	    count[a[i]]++;
	    int numerator=1;
	    for(int i=a.length;i>=1;i--)
	    numerator*=i;
	    int denominator=1;
	    for(int i=0;i<128;i++)
	    {
	        if(count[i]>1)
	        {
	            for(int j=count[i];j>=1;j--)
	            denominator*=j;
	        }
	    }
	    System.out.printf("%d",numerator/denominator);
	}
}
