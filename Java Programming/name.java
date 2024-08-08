class Mobile{
    String brand;
    int price;
    static String name;  // by this each and every object will have
                         // same value in this feild

    static{
        name="Phone";
        System.out.println(name); // called only once anyhow many times 
                                    // creating an object
    }
    public void show()
    {
        System.out.println(brand+" "+ price+" "+name);
    }
    public Mobile()
    {
        System.out.println("Constructor is called\n");
    }
}
public class name {
    public static void main(String []args)
    {
        Mobile obj1=new Mobile();
        obj1.brand="Apple";
        obj1.price=1234;
        obj1.name="Smartphone";

        Mobile obj2=new Mobile();
        obj2.brand="Samsung";
        obj2.price=12345;
        obj2.name="Keypad";
        
        obj1.show();
        Mobile obj3=new Mobile();
        obj3.name="Changed Name";
        obj1.show();
        obj2.show(); 
        obj3.show();
         
        //for static variable we use direct name of class 
        //e.g.
        Mobile.name="Again changed";
        obj1.show();
        obj2.show();
        obj3.show();

    }
    
}
