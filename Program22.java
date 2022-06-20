import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is : "+this.iNo);
    }

    public void DisplayNum()
    {
         int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iCnt = 1;
         
         while(iCnt <= iNo)
         {
             System.out.println<<iCnt<<endl;
             iCnt++;
         }
    }
}

class program22
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayNum();
    }
}