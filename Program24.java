import java.lang.*;
import java.util.*;

class Number
{
    public int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is: "+this.iNo);
    }

    public boolean ChkEven()
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program24
{
    public static void main(String arg[])
    {
        boolean iRet ;

        Number nobj = new Number();

        nobj.Accept();
        nobj.Display();
        
        iRet = nobj.ChkEven();
        if(iRet == true)
        {
          System.out.print("Even number");
        }
        else
        {
          System.out.print("Odd number");
        }
    }
}