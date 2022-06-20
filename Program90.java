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

        if(iRow != iCol)
        {
            System.out.println("Invalid input\n");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j<= iCol; j++)
            {
                if(i < j)
                {
                    System.out.print("*\t");
                }
                else if(i > j)
                {
                    System.out.print("#\t");
                }
                else if(i == j)
                {
                    System.out.print("$\t");
                }
            }
            System.out.println();
        }
        
    }
}
class Program90
{
    public static void main(String agr[])
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