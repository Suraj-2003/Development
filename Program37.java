import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public Number(int iValue)
    {
        this.iNo = iValue;
    }

    public boolean CheckPerfect()
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = (iNo/2); ((iCnt >= 1) && (iSum <= iNo)); iCnt--)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program37
{
    public static void main(String arg[])
    {
        boolean bRet;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        bRet = nobj.CheckPerfect();

        if(bRet == true)
        {
            System.out.print(iValue);
            System.out.println(" is a perfect number");
        }
        else
        {
            System.out.print(iValue);
            System.out.println(" is not a perfect number");

        }

    }
}