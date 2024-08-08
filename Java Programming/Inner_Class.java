class A
{
    int age;
    public void show()
    {
        System.out.println("in A show");
    }

    class B
    {
        public void config()
        {
            System.out.println("in Config");
        }
    }

    static  class C
    {
        // this static can be made only in inner class
        // if Outer class is tried to be made static will throw illegal modifier error
        
        public void showc()
        {
            System.out.println("in C show");
        }
    }
}
public class Inner_Class {
    public static void main(String []args)
    {
        A obj=new A();
        obj.show();

        // B obj1=new B();
        // obj1.config();  Will show error bcz there is no class B
        

       
        // A.B obj1=new B();  // Will show error
        //First of all we require obj refering to class A i.e obj

        //Corrected
        A.B obj1=obj.new B();
        obj1.config();

        

        //Also we can use static class and that time 
        //doesn't require to call via object
        // i.e A.C obj2=obj.new C();

        A.C obj2=new A.C();
        obj2.showc();
    }
    
}
