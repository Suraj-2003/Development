import java.lang.*;
import java.util.*;

class Arithmatic
{
    public static int Add(int iNo1, int iNo2)
    {
        int iAns = 0; 
        iAns = iNo1 + iNo2;
        return iAns;
    }

    public static int Sub(int iNo1, int iNo2)
    {
        int iAns = 0; 
        iAns = iNo1 - iNo2;
        return iAns;
    }

    public static int Mult(int iNo1, int iNo2)
    {
        int iAns = 0; 
        iAns = iNo1 * iNo2;
        return iAns;
    }

    public static int Div(int iNo1, int iNo2)
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

        switch(iChoice)
        {
        case 1:
            iRet = Arithmatic.Add(iValue1, iValue2);
            System.out.println("Addition is:"+iRet);
            break;

        case 2:
            iRet = Arithmatic.Sub(iValue1, iValue2);
            System.out.println("Substraction is:"+iRet);
            break; 

        case 3:
            iRet = Arithmatic.Mult(iValue1, iValue2);
            System.out.println("Multiplication is"+iRet);
            break;

        case 4:
            iRet = Arithmatic.Div(iValue1, iValue2);
            System.out.println("Division is"+iRet);
            break;

        default:
            System.out.println("Ivalid Operation");
        }
     }
}