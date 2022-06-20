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
    public boolean Search()
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            { 
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}

class Program73
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);
       int iLength = 0; boolean bRet;

       System.out.println("Enter the value of elements");
       iLength = sobj.nextInt();

       ArrayX aobj = new ArrayX(iLength);

       aobj.Accept();

       bRet = aobj.Search();
       
       if(bRet == true)
       {
           System.out.println("Element is there in Array");
       }
       else
       {
        System.out.println("Element is not there in Array");
       }

    }
}