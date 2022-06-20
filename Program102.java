import java.lang.*;
import java.util.*;

class Pattern
{
   private int iRow, iCol;

   public Pattern(int iValue1, int iValue2)
   {
       this.iRow = iValue1;
       this.iCol = iValue2;
   }
   public void DisplayPattern()
   {
       int i = 0, j = 0;
       char ch = '\0';

       for(i = 1; i <= iRow; i++)
       {
            for(j = 1, ch = 'a'; j <= i; j++,ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println("\n");
       }
   }
}

class Program102
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns");
        iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1, iValue2);

        obj.DisplayPattern();
    }
}