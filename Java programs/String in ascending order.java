import java.util.*;
public class Main {

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String s[]=sc.next().split("");char max='a';
        Arrays.sort(s);String ss="";
        for(int i=0;i<s.length;i++)
        {
            for(int j=i+1;j<s.length;j++)
            {
                if(s[i].equals(s[j]))
                {
                    s[j]="0";
                }
            }
        }
        for(int i=0;i<s.length;i++)
        {
            if(!s[i].equals("0"))
            System.out.print(s[i]);
        }
        
        
	}
}
