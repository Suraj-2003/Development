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

    public int CountEven()
    {
        int iCnt = 0;
        int iCount = 0;

        System.out.println("Even elements are : ");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program67
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);
            int iLength = 0, iRet =0;

            System.out.println("Enter the value for constructor");
            iLength = sobj.nextInt();

            ArrayX obj = new ArrayX(iLength);

            obj.Accept();
            iRet = obj.CountEven();
            System.out.println("Number of even elements: "+iRet);
            
            obj = null;
    }
}