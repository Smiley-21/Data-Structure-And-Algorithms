class MyException extends Exception
{
    public MyException(String name)
    {
        super(name);
    }
}


public class Excep {
    public static void main (String []args)
    {
        int i=2;
        int j=0;
        int nums[]=new int[5];
        try{

            j=18/i;
            if(j==0)
            throw new ArithmeticException("I don't want to calculate further");
            if(j==0)
            throw new MyException("Number is divided by zero");
            System.out.println(nums[1]);
            System.out.println(nums[5]);
        }
        catch(ArithmeticException e)
        {
            System.out.println("Cannot divide by zero");
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    
}

// Object -->Thowable -->(Error, Exception)

//Error -->Thread Death , IOError ,OutofMemory
//Exception -->Runtime , SQlException.........
//Runtime Exception -->Arithmetic Exception,ArrayIndexOutofBound, NullPointer 
