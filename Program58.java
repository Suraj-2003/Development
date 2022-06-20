import java.lang.*;
import java.util.*;

class Armstrong
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
        System.out.println("Entered number is "+this.iNo);
    }
    boolean CheckArmstrong()
    {
        int iDigit = 0, iDigCnt = 0, iTemp = 0;
        int iSum = 0, iCnt = 0, iMult = 0 ;

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigCnt++;
            iNo = iNo / 10;
        }

        iNo = iTemp;

        while(iNo != 0)
        {
            iMult = 1;
            iDigit = iNo % 10;
            
            for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
            {
                iMult = iMult * iDigit;
            }

            iSum = iSum + iMult;
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program58
{
    public static void main(String arg[])
    {
        boolean bRet;

        Armstrong aobj = new Armstrong();

         aobj.Accept();
         aobj.Display();
        
         bRet = aobj.CheckArmstrong();
        
         if(bRet == true)
         {
             System.out.println(" Armstrong number");
         }
         else
         {
            System.out.println("Not Armstrong number");
         }
         
    }
}