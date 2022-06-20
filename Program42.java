import java.lang.*;
import java.util.*;

class Factors
{
     private int iNo;

     public void Accept()
     {
         Scanner sobj = new Scanner(System.in);
         System.out.println("Enter number");
         this.iNo = sobj.nextInt();
     } 
     public void Display()
     {
         System.out.println("Entered Value is: "+this.iNo);
     }
     public Boolean CheckPrime()
     {
         int iCnt = 0;
         
         for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
         {
             if((iNo % iCnt) == 0)
             {
                 break;
             }
         }
         if(iCnt == (iNo/2)+1)
         {
              return true;
         }
         else
         {
             return false;
         }
     }
}

class Program42
{
    public static void main(String arg[])
    {
       boolean bRet;
       Factors fobj = new Factors();
       
       fobj.Accept();
       fobj.Display();
       
       bRet = fobj.CheckPrime();

       if(bRet == true)
       {
           System.out.println("Prime number");
       }
       else
       {
           System.out.println("Not prime number");
       }
    }
}