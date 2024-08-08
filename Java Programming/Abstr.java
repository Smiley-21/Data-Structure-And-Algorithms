abstract class Car
{
    public abstract void drive();
    //Abstract class may have abstract method or may not have 
    // But if there is abstract method then there should always be abstract class
    public abstract void fly();
    public void playMusic()
    {
        System.out.println("Play Music");
    }
}

class WagonR extends Car
{

    //Each abstract method should be defined in the child class
    //otherwise this extended class will again become abstract class

    public void drive()
    {
        System.out.println("Driving ...WagonR");
    }

    public void fly()
    {
        System.out.println("Car is flying");
    }
}
public class Abstr {
    public static void main(String args[])
    {
        // Car obj=new Car();
        //Object of Abstract class can't be created
        Car obj=new WagonR();
        obj.playMusic();
        obj.drive();
    }
    
}
