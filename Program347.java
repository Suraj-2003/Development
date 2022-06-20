import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
    public Frame fobj;

    public MarvellousFrame(String name)
    {
        fobj = Frame(name);
        fobj.setSize(600,600);
        fobj.setVisible(true);

        fobj.addWindowListener(new MarvellousListener()); 
    }
}

class MarvellousListener extends WindowAdapter  

{
                           
   public void windowClosing(WindowEvent obj)
   {
       
       System.exit(0);  

   }
   
   

}

class FrameDemo4
{
    public static void main(String arg[])
    {
       System.out.println("Print the data on console");

       MarvellousFrame mobj = new MarvellousFrame("PPA");
       
      
    }
}