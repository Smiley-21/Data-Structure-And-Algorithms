class A
{
    public void show1()
    {
        System.out.println("in A show");
    }
}

class B extends A
{
    public void show2()
    {
        System.out.println("in B show");
    }
}

public class Overr {

    public static void main(String []args)
    {
        A obj1=new A();
        obj1.show1();

        // Upcasting
        // A obj2=(A)new B();
        // obj2.show1();


        //Downcasting
        A obj3=new B();
        
        // obj3.show2();
        //   Since object of B but can't use for show2
        //   It is because reference here used is of type A
        //  and A has no idea of B 

        //To solve use
        B obj4=(B)obj3;
        obj4.show2();

    }
}
