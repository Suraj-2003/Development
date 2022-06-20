import java.lang.*;
import java.util.*;


class Arithmatic
{
    private int iNo1;
    private int iNo2;

    public Arithmatic(int iValue1, int iValue2)
    {
        iNo1 = iValue1;
        iNo2 = iValue2;
    }

    public int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

}

class Program5
{
    public static void main(String arg[])
    {
       int iValue3 = 0;

       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter first number");
       int iValue1 = sobj.nextInt();

       System.out.println("Enter second number");
       int iValue2 = sobj.nextInt();

       Arithmatic aobj = new Arithmatic(iValue1, iValue2);

       iValue3 = aobj.Addition();

       System.out.println("Addition is: "+iValue3);

    }
}
