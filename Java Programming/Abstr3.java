abstract class Computer
{
    public abstract void code();
   
}
class Laptop extends Computer
{
    public void code()
    {
        System.out.println("Code , Compile , Run......");
    }
}

class Desktop extends Computer
{
    public void code()
    {
        System.out.println("Code , Compile , Run .........:Faster");
    }
}
class Developer
{
    public void devApp(Computer lap)
    {
        lap.code();
    }
}
public class Abstr3 {
    public static void main (String []args)
    {
        Computer Saurlab=new Laptop();
        Computer Sauradesk=new Desktop();
        Developer saurabh=new  Developer();
        // saurabh.devApp(Saurlab);
        saurabh.devApp(Sauradesk); 
        saurabh.devApp(Saurlab); // Here it will be restricted if we are 
                                   // using Laptop as input therefore we need to define
                                   // Computer
    }
    
}
