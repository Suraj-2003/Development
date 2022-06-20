import java.lang.*;
import java.util.*;

class Number 
{
    private int iNo;

    public Number(int iValue)
    {
        iNo = iValue;
    }

    public void Display()
    {
        int iCnt = 0;
        
        if(iNo < 0)  // Updater
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.println("Hello");
        }
    }
}
class Program18
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number");
        int iValue = sobj.nextInt();
        
        Number nobj = new Number(iValue);

        nobj.Display();

    }
}
