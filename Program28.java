import java.lang.*;
import java.util.*;

class jwelery
{
    private int iWeight;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of gold coin that you want to purchase");
        this.iWeight = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Entered size of gold coin is:"+this.iWeight);
    }

    public void jwelersPortal()
    {
        switch(iWeight)
        {
            case 1:
            System.out.println("Youe amount is 4000");
            break;

            case 2:
            System.out.println("Youe amount is 8000");
            break;

            case 3:
            System.out.println("Youe amount is 20000");
            break;

            case 4:
            System.out.println("Youe amount is 40000");
            break;

            default:
            System.out.println("Invalid weight");
            break;
        }

    }
}
class Program28
{
    public static void main(String arg[])
    {
         jwelery jobj = new jwelery();

         jobj.Accept();
         jobj.Display();

         jobj.jwelersPortal();
    }
}