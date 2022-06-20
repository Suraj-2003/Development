import java.lang.*;
import java.util.*;

class Factor
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
        System.out.println("Entered valus is:"+this.iNo);
    }
    public int CountFactor()
    {
        int iCnt = 0;
        int iFactCnt = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iFactCnt++;
            }
        }
        return iFactCnt;
    }
}
class Program40
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Factor fobj = new Factor();

        fobj.Accept();
        fobj.Display();
        
        iRet = fobj.CountFactor();
        System.out.println("Number of factors is: "+iRet);

    }
}