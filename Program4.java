import java.lang.*;
import java.util.*;

class Program4
{
    public static void main(String arg[])
    {
        int iNo3 = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first number");
        int iNo1 = sobj.nextInt();
        
        System.out.println("Enter second number");
        int iNo2 = sobj.nextInt();
    
        iNo3 = iNo1 + iNo2;

        System.out.println("Addition is:"+iNo3);
        
    }
}