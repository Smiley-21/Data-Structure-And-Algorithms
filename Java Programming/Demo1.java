//java.util.*  
//Here star denote all the files not all folders in the util package
//In one file atmax there will be only one public class
class Calc
{
    public int add(int n1, int n2)
    {
        return n1+n2;
    }
    public int sub(int n1,int n2)
    {
        return n1-n2;
    }
}
public class Demo1 {
    public static void main(String args[])
    {
        ScienCal obj1=new ScienCal();
        System.out.println(obj1.add(2,4));
        System.out.println(obj1.power(2,5));
    }
}
