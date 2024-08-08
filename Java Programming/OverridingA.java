class Vehicle{
   public void drive()
    {
        System.out.println("drive() method of base class");
        System.out.println("driving the Car");
    }
}

class Car extends Vehicle
{
 public void drive()
    {
        System.out.println("drive() method of derived class ");
        System.out.println("Car is driving");
    }
}
public class OverridingA {
    public static void main(String []args)
    {
        Car c1=new Car();
        Vehicle v1=new Vehicle();
      

        c1.drive();
        v1.drive();
    }
    
}
