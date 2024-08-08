class A{
    public void show()
    {
        System.out.println("in A Show");
    }

    class B{
        public void config()
        {
            System.out.println("in B Config");
        }
    }
}

public class Inner {
    public static void main(String []args)
    {
        A obj=new A();
        obj.show();
        A.B obj1=obj.new B();
        obj1.config();
    }
}
