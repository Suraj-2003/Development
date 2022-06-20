import java.lang.*;
import java.util.*;

class Bitwise
{
   public int OnBit(int iNo)
   {
      
    int iMask = 0X00000048; 
    int iResult = 0;

    iResult = iNo ^ iMask;
    
    return iResult;

    }

}

class Program175
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();
        
        Bitwise bobj = new Bitwise();
        int iRet = bobj.OnBit(iValue);

        System.out.println(iRet);


    }
}