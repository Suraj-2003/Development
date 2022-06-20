import java.lang.*;
import java.util.*;

class ArrayX
{
   private int Arr[];

   public void Accept()
   {
       int iSize = 0, iCnt = 0;

       Scanner sobj = new Scanner(System.in);
       System.out.println("Enter number of elements");
       iSize = sobj.nextInt();

       Arr = new int[iSize];

       System.out.println("Enter elements of Array:");
       
       for(iCnt = 0; iCnt < Arr.length; iCnt++)
       {
           Arr[iCnt] = sobj.nextInt();
       }
   }
       
   public void Display()
   {
    int iCnt = 0;   
    System.out.println("Elements of Array are:");
       
       for(iCnt = 0; iCnt < Arr.length; iCnt++)
       {
           System.out.println(Arr[iCnt]);
       }

   }
}

class Program59
{
    public static void main(String arg[])
    {
       ArrayX nobj = new ArrayX();

       nobj.Accept();
       nobj.Display();

    }
}