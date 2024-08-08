class A{
    public A(){
        super();// In every constructor there is always a super() function  by default
        System.out.println("Default constructor of class A is called");
    }

    public A(int n)
    {
        super();
        System.out.println("Paramerized constructor of class A is called");
    }
}

 class B extends A {
    public B()
    {
        super();// Nothing is passed will call default constructor of super class
        // super(5); // When this is written here and default constructor of class B is executed then parameterized 
                  // constructor of class A's constructor is called 
        System.out.println("Default constructor of class B is called ");
    }
    public B (int n)
    {
        super(); // This will call constructor of super class
        // If we pass value in the super then it will call paramterized constructor of super class 
        System.out.println("Parameterized constructor of class B is called ");
    }
    
}

public class constructor{
    public static void main(String []args)
    {
        // B obj1=new B(); // used for denoting default constructor
        B obj2=new B(5); //used for denoting paramterized constructor
        System.out.println(obj2);
    }
}


