import java.lang.*;
import java.util.*;

class Arithmatic
{
    private int iNo1;
    private int iNo2;

    public Arithmatic(int iValue1, int iValue2)
    {
       this.iNo1 = iValue1;
       this.iNo2 = iValue2;
    }

    public int Add()
    {
        int iAns = 0; 
        iAns = iNo1 + iNo2;
        return iAns;
    }

    public int Sub()
    {
        int iAns = 0; 
        iAns = iNo1 - iNo2;
        return iAns;
    }

    public int Mult()
    {
        int iAns = 0; 
        iAns = iNo1 * iNo2;
        return iAns;
    }

    public int Div()
    {
        int iAns = 0; 
        iAns = iNo1 / iNo2;
        return iAns;
    }
}

class Calculator
{
    public static void main(String[] args)
    {
        int iValue1 = 0, iValue2 = 0;
        int iChoice = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first Number:"); 
        iValue1 = sobj.nextInt();

        System.out.println("Enter second Number:");
        iValue2 = sobj.nextInt();

        System.out.println("Enter your Operations:");
        System.out.println(" 1 : Addition");
        System.out.println(" 2 : Substraction");
        System.out.println(" 3 : Multiplication");
        System.out.println(" 4 : Division");
        iChoice = sobj.nextInt();
        
        Arithmatic aobj = new Arithmatic(iValue1, iValue2);

        switch(iChoice)
        {
        case 1:
            iRet = aobj.Add();
            System.out.println("Addition is:"+iRet);
            break;

        case 2:
            iRet = aobj.Sub();
            System.out.println("Substraction is:"+iRet);
            break; 

        case 3:
            iRet = aobj.Mult();
            System.out.println("Multiplication is"+iRet);
            break;

        case 4:
            iRet = aobj.Div();
            System.out.println("Division is"+iRet);
            break;

        default:
            System.out.println("Ivalid Operation");
        }
     }
}