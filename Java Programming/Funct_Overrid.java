@FunctionalInterface
interface A {
    void show();
}

// class B implements A
// {
// public void show()
// {
// System.out.println("in B show");
// }
// }
public class Funct_Overrid {
    public static void main(String args[]) {
        B obj = new B();
        // obj.show();

        A obj1 = new A() {
            public void show() {
                System.out.println("in anonymous class declaration");
            }
        };

        obj1.show();

        //Lambda Expression works only for functional Interface
        A obj2=()->
        {
            System.out.println("lambda expression is used");
        };
        obj2.show();

    }

}
