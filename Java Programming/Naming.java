// Camel Casing 

// class -Calc  (Start with capital letter)
//variable and method- marks,show (Start with small letter)
// constants - PIE,BRAND (All capital letter)

//showMyMarks()
class A{
    public A(){
        System.out.println("Constructor of class A is called");
    }
    public void show(int n)
    {
        System.out.println("show of A is called");
    }
}
public class Naming {
    public static void main(String args[])
    {
            new A();  // anonymous object is created
            A obj=new A(); // new referencecd object is created
            obj.show(3);
    }
    
}
