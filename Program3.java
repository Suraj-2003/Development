import java.lang.*;
import java.util.*;

class Program3
{
    public static void main(String arg[])
    {
        int k = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first number");
        int i = sobj.nextInt();
        
        System.out.println("Enter second number");
        int j = sobj.nextInt();
    
        k = i + j;

        System.out.println("Addition is:"+k);
        
    }
}