final class Calci{
    public void show()
    {
        System.out.println("in Calci show");
    }
    public void add(int a, int b)
    {
        System.out.println(a+b);
    }
}

// final  -- method ,class,variable
// class Calc2 extends Calci{
//     public final void show()
//     {
//         System.out.println("in Calc2 show");
//     }
// }

//Error is thrown because Calci cannot be extended due to use of final words
public class Final {
    public static void main(String args[])
    {
        int num=8;
        num=9;
        System.out.println(num);
        // final int x=7;
        // x=10;
        // System.out.println(x);
    }
    
}
