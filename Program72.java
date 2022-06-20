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
         System.out.println("Entered elements is: "+Arr.length);
         int iCnt = 0;
          
         for(iCnt = 0; iCnt<Arr.length; iCnt++)
         {
             System.out.println("Enter element: "+(iCnt+1));
             Arr[iCnt] = sobj.nextInt();
         }

         System.out.println("Enter number to calculate frequency:");
         iNo = sobj.nextInt();
     }
     public int Frequency()
     {
         int iCnt = 0,iFrequency = 0;

         for(iCnt = 0; iCnt < Arr.length; iCnt++)
         {
             if(iNo == Arr[iCnt])
             {
                 iFrequency++;
             }
         }
         return iFrequency;
     }
}

class Program72
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0, iRet = 0;

        System.out.println("Enter the value of consructor");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();

        iRet = aobj.Frequency();
        System.out.println("Frequency is: "+iRet);

        aobj = null;


    }
}