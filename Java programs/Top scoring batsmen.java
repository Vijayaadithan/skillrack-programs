import java.util.*;
public class Hello {

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();int b=0;String real=" ";int max=0; 
        String s=" ";String n[];
        for(int i=0;i<a;i++)
        {
            s=sc.next();
            n=s.split("[,]");
            b=Integer.parseInt(n[1]);
            if(b>max)
            {
                max=b;
                real=n[0];
            }
        }
        System.out.print(real);
	}
}
