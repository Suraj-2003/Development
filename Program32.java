import java.lang.*;
import java.util.*;

// Time Complexity : O(N)
 
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
        System.out.println("Entered value is:"+this.iNo);
    }

    public void DisplayNonFactors()
    {
        int iCnt = 0;
    
        for(iCnt = 1; iCnt <= iNo; iCnt++) //*
        {
          if((iNo % iCnt) != 0)
          {
             System.out.println(iCnt);
          }
        }
    }
}

class Program32
{
    public static void main(String arg[])
    {
       Factors fobj = new Factors();

       fobj.Accept();
       fobj.Display();

       fobj.DisplayNonFactors();
    }
}