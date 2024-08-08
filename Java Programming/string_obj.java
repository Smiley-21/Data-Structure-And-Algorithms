public class string_obj {
    public static void main(String args[])
    {
        String name1="Saurabh";
        String name2="Saurabh";
        //Here both name1 and name2 are pointing to same object in the heap memory
        //name1 and name2 are two different references only in the stack of main function
        //
            System.out.println(name1==name2);

        // On cretion of new variable first JVM check if there is same
        //string present in the string constant pool
        // if yes then simpy point to that address
        //else create a new one reference

         name1=name1+"Patel";
        //Here address of name1 is changed to new address by creating a new object after concatenating 
        //Previous object is elligble  for garbage collection


        //Note
        //String are by default immutable string
        //therefore we have two class which gives mutable 
        // String Buffer and String Builder

        StringBuffer sb=new StringBuffer();
        System.out.println(sb.capacity());

        StringBuffer name=new StringBuffer("Saurabh");
        System.out.println(name.capacity());
        System.out.println(name.length());

    }   


}
