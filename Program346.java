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

class MarvellousListener implements WindowListener
{
   public void windowDeactivated(WindowEvent obj){} 
   public void windowActivated(WindowEvent obj){}
   public void windowDeiconified(WindowEvent obj){}
   public void windowiconified(WindowEvent obj){}
   public void windowClosed(WindowEvent obj){}
   public void windowClosing(WindowEvent obj)
   {
       System.exit(0);  

   }
   public void windowOpened(WindowEvent obj){}
   

}

class FrameDemo3
{
    public static void main(String arg[])
    {
       System.out.println("Print the data on console");

       MarvellousFrame mobj = new MarvellousFrame("PPA");
       
      
    }
}