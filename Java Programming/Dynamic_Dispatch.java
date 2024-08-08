
class A{
    public void show()
    {
        System.out.println("in A Show");
    }
}

class B extends A{
    public void show()
    {
        System.out.println("in B Show");
    }
}
class C extends A{
    public void show()
    {
        System.out.println("in C Show");
    }
}
public class Dynamic_Dispatch {
    public static void main(String args[])
    {
        A obj=new A();
        obj.show();
        
        obj=new B();
        obj.show();

        obj=new C();
        obj.show();
    }
    
}
