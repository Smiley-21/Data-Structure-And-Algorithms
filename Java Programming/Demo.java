class A
{
    public A()
    {
        System.out.println("Default constructor of class A is executed");
    }

    public A (int n)
    {
        System.out.println("Parameterized constructor of class B is executed ");
    }

}

class B extends A {
    public B()
    {
        System.out.println("Default constructor of class B is executed ");
    }

    public B(int n)
    {
        super(); // This will initiate to super class default constructor
        // this();    // This will initiate to default constructor of current class i.e B
                   // Which on execution will call super class constructor 
        System.out.println("Parameterized constructor of class B is executed ");
    }

}
public class Demo {

    public static void main(String []args)
    {
        B obj=new B(5);
 

        //Output
        // Default constructor of class A is executed
        // Default constructor of class B is executed
        // Parameterized constructor of class B is executed
    }
    
}
