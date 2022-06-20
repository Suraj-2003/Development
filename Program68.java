import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int SummationNumber()
    {
        int iCnt = 0;
        int iSum = 0;

        System.out.println("Even elements are : ");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
    }
}

class Program68
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);
            int iLength = 0, iRet =0;

            System.out.println("Enter the value for constructor");
            iLength = sobj.nextInt();

            ArrayX obj = new ArrayX(iLength);

            obj.Accept();
            iRet = obj.SummationNumber();
            System.out.println("Summation is: "+iRet);
            
            obj = null;
    }
}