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

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of array are : ");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class Program66
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);
            int iLength = 0, iRet =0;

            System.out.println("Enter the value for constructor");
            iLength = sobj.nextInt();

            ArrayX obj = new ArrayX(iLength);

            obj.Accept();
            obj.Display();

            obj = null;
    }
}