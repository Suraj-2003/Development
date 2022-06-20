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

    public int SumFactors()
    {
        int iCnt = 0;
        int iSum = 0;
         
        if(iNo < 0)  //*
        {
          iNo = -iNo;
        }
        
        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
          if((iNo % iCnt) == 0)
          {
             iSum = iSum + iCnt;
          }
        }
        return iSum;
    }
}

class Program33
{
    public static void main(String arg[])
    {
       int iRet = 0;

       Factors fobj = new Factors();

       fobj.Accept();
       fobj.Display();

       iRet = fobj.SumFactors();
       System.out.println("Sum of factors is:"+iRet);
    }
}