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
    public boolean CheckPallindrome()
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;
        
        iTemp = iNo;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }
        
        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program51
{
    public static void main(String arg[])
    {
        boolean bRet;

        Digits dobj = new Digits();

        dobj.Accept();
        dobj.Display();
        
        bRet = dobj.CheckPallindrome();
        if(bRet == true)
        {
            System.out.println("Pallindrome number");
        }
        else
        {
            System.out.println("Not Pallindrome number");
        }
    }
}