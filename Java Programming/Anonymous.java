
abstract class A
{
    public abstract void show();
    public abstract void config();

}

// class B extends A
// {
//     public void show()
//     {
//         System.out.println("in B show");
//     }
// }

//Since above class is written just to define show function in class A
// Therefore we create using anonymous
public class Anonymous{
    public static void main(String args[])
    {
        // A obj =new B();
        // obj.show();


        A obj1=new A()   // Here created class has no name  and is defined inside Anonymous class
        {
            public void show()
            {
                System.out.println("in New show");
            }

            public void config()
            {
                System.out.println("Config in New Show");
            }

        };
        obj1.show();
        obj1.config();

    }
}