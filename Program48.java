import java.lang.*;
import java.util.*;

class Digits
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
        System.out.println("Entered value is: "+this.iNo);
    }
    public int SumDigits()
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }

}
class Program48
{
    public static void main(String arg[])
    {
       int iRet = 0;

       Digits dobj = new Digits();
         
       dobj.Accept();
       dobj.Display();
       
       iRet = dobj.SumDigits();
       System.out.println("Summation of digits are: "+iRet);
    }
}