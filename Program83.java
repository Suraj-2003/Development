import java.lang.*;
import java.util.*;

class Pattern
{
    private int iNo;

    public Pattern(int iValue)
    {
        this.iNo = iValue;
    }
    public void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
             if((iCnt % 2) == 0)
             {
                 System.out.print("*\t");
             }
             else
             {
                 System.out.print(iCnt+"\t");
             }
        }
    } 
}

class Program83
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Pattern obj = new Pattern(iValue);

        obj.Display();
    }
}