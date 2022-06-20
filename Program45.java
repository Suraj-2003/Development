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
    public int CountDigits()
    {
        int iDigit = 0;
        int iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }
        return iCount;
    }

}
class Program45
{
    public static void main(String arg[])
    {
       int iRet = 0;

       Digits dobj = new Digits();
         
       dobj.Accept();
       dobj.Display();
       
       iRet = dobj.CountDigits();
       System.out.println("Number of digits are: "+iRet);
    }
}