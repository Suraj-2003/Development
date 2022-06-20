import java.lang.*;
import java.awt.*;

class FrameDemo1
{
    public static void main(String arg[])
    {
       System.out.println("Print the data on console");
       
       Frame fobj = new Frame("Marvellous");
       fobj.setSize(400,400);
       fobj.setVisible(true);
    }
}