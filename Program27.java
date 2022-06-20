import java.lang.*;
import java.util.*;

class Result
{
    private float fMarks;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your marks");
        this.fMarks = sobj.nextFloat();
    }

    public void Display()
    {
        System.out.println("Youe entered marks is:"+this.fMarks);
    }

    public void DisplayClass()
    {
        if((fMarks > 0.0) && (fMarks < 35.0))
        {
           System.out.println("You are fail");
        }
        else if((fMarks >= 35.0) && (fMarks < 50.0))
        {
            System.out.println("You are pass");
        }
        else if((fMarks >= 50.0) && (fMarks < 60.0))
        {
            System.out.println("You are second pass");
        }
        else if((fMarks >= 60.0) && (fMarks < 70.0))
        {
            System.out.println("You are first pass");
        }
        else if((fMarks >= 70.0) && (fMarks <= 100.0))
        {
            System.out.println("You are pass with distinction");
        }
        else
        {
            System.out.println("Invalid Marks");
        }
    }
}

class Pgogram27
{
    public static void main(String arg[])
    {
         Result robj = new Result();

         robj.Accept();
         robj.Display();

         robj.DisplayClass();
         
    }
}