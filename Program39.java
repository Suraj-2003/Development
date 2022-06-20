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
        System.out.println("Entered value is:"+this.iNo);
    }
    public boolean CheckPrime()
    {
        int iCnt = 0;
        boolean bFlag = true;

        for(iCnt = 2; iCnt <= (iNo/2); iCnt++) 
        {
            if((iNo % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
        
    }
}

class Program39
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