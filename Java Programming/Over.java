class A{
    public void show()
    {
        System.out.println("in A show");
    }
}

class B extends A{
    public void show()
    {
        System.out.println("in B show");
    }
}

class C extends B{
    public void show()
    {
        System.out.println("in C show");
    }
}
public class Over {
    public static void main(String []args)
    {
        A obj1=new A();
        A obj2=new B();
        // // B obj3=new A();
        B obj4=new B();
        obj1.show();
        obj2.show();
        obj4.show();


        //Dynamic Method Dispatch
        A obj=new A();
        obj.show();

        obj=new B();
        obj.show();

        obj=new C();
        obj.show();
    }

}
