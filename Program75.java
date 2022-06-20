import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];
    private int iNo;

    public ArrayX(int iValue)
    {
        Arr = new int[iValue];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter element: "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter element to search");
        iNo = sobj.nextInt();
    }
    public int SearchLastOccurance()
    {
        int iCnt = 0;
        
        for(iCnt = (Arr.length-1); iCnt >= 0; iCnt--)
        {
            if(Arr[iCnt] == iNo)
            { 
                break;
            }
        }
        return iCnt;
    }
}

class Program75
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);
       int iLength = 0; int iRet = 0;

       System.out.println("Enter the value of elements");
       iLength = sobj.nextInt();

       ArrayX aobj = new ArrayX(iLength);

       aobj.Accept();

       iRet = aobj.SearchLastOccurance();
       
       if(iRet == -1)
       {
           System.out.println("There is no such element in Array");
       }
       else
       {
        System.out.println("Element Last occured at: "+iRet);
       }

    }
}