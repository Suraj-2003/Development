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

       for(i = 1, ch = 'A'; i <= iRow; i++,ch++)
       {
            for(j = 1; j <= i; j++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println("\n");
       }
   }
}

class Program101
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