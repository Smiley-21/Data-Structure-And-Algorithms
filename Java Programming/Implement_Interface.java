interface A{
    int age=14;
    String area="Square"; // by default variable are final and static
    void show();
    void config();
}

class B implements A{
    public void show()
    {
        System.out.println("in B show");

    }

   public void config()
    {
        System.out.println("in B config");
    }
}



public class Implement_Interface {
    public static void main(String []args)
    {
        B obj=new B();
        obj.config();
        System.out.println(A.age);
    }
}
