import java.lang.*;

class Number
{
   public void Display()
   {
       int iCnt = 0;

       for(iCnt = 0; iCnt<5; ++iCnt)
       {
           System.out.println("Hello");
       }
   }
}

class Program15
{
    public static void main(String arg[])
    {
        Number nobj = new Number();
        nobj.Display();
    }
}