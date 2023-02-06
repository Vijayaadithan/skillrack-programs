class Vijay<T extends Number>
{
    T [] nums;
    Vijay(T [] b)
    {
        nums=b;
    }
    double avg()
    {
        double sum=0.0;
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i].doubleValue();
        }
        System.out.println(sum);
        return sum;
    }
}
public class Main
{
	public static void main(String[] args) 
	{
		Integer inum[]={1,2,3,4,5};
		Vijay<Integer> ob1=new Vijay<Integer>(inum);
		ob1.avg();
	}
}
