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
    public void DisplayEven()
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                System.out.println(iDigit);
            }

            iNo = iNo / 10;
        }
    }
}
class Program49
{
    public static void main(String arg[])
    {
        Digits dobj = new Digits();

        dobj.Accept();
        dobj.Display();
        dobj.DisplayEven();
    }
}