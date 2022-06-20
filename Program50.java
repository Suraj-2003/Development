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
    public int Reverse()
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }
        return iRev;
    }
}

class Program50
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Digits dobj = new Digits();

        dobj.Accept();
        dobj.Display();
        
        iRet = dobj.Reverse();
        System.out.println("Digits are in reverse order: "+iRet);
    }
}