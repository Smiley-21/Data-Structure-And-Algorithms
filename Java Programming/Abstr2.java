interface A{
    // public abstract void show();  No need to write this way 
                                    // By default methods in interface are
                                    // abstract method
        void show();
        void config();

        // int age  Will give error
        // In interface every variable is by default  final and static

        //i.e
        int age=44;
        String area="Mumbai";

}
interface X
{
    void run();
}

interface Y extends X{
    void smooth();
}
class B implements A  ,X   // implement only gives about method not of variable
{                          // a class can implement more than one interface
    public void show()
    {
        System.out.println("in B show");
    }

    public void config()
    {
        System.out.println("in B config");
    }

    public void run()
    {
        System.out.println("in B run");;
    }
}
public class Abstr2 {
    public static void main(String args[])
    {
        B obj=new B();
        // obj=new A(); Can't be initiated 
        obj.config();
        obj.show();
        System.out.println(A.area);
        // A.area="Hyderabad";   gives error 

        obj.run();
    }
    
}

// class-->class    -- extends
// class--->interface -- implements
// interface-->interface --extends
