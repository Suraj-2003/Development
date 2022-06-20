import java.lang.*;
import java.util.*;

class Digits
{
    private int iNo1, iNo2;

    public void Accept()
    {
        Scanner sobj1 = new Scanner(System.in);
        System.out.println("Enter Base");
        this.iNo1 = sobj1.nextInt();
        
        Scanner sobj2 = new Scanner(System.in);
        System.out.println("Enter Power");
        this.iNo2 = sobj2.nextInt();
    }
    public void Display()
    {
        System.out.println("Entered first number is: "+this.iNo1);
        System.out.println("Entered second number is: "+this.iNo2);
    }
    public int Power()
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            iMult = iMult * iNo1;
        }
        return iMult;
    }
}
class Program52
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Digits dobj = new Digits();

        dobj.Accept();
        dobj.Display();
        iRet = dobj.Power();
        System.out.println("Result is: "+iRet);
    }
}