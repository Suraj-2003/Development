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

    
   public boolean Check()
   {
       if(
           ((iNo % 3) == 0) &&
           ((iNo % 5) == 0)
         )
        {
            return true; 
        }
        else
        {
            return false;
        }
    }
}

class Program25
{
    public static void main(String arg[])
    {
        boolean iRet ;

        Number nobj = new Number();

        nobj.Accept();
        nobj.Display();
        
        iRet = nobj.Check();
        if(iRet == true)
        {
          System.out.print("Divisible by 3 and 5");
        }
        else
        {
          System.out.print("Not Divisible by 3 and 5");
        }
    }
}