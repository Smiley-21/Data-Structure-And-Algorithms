import java.util.*;

public class Collections_TreeSet {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        TreeSet<String>ust=new TreeSet<>(Comparator.reverseOrder());
        for(int i=0; i<n; i++)
        {
            String x=sc.next();
            ust.add(x);
        }
        Iterator<String>it=ust.descendingIterator();
        System.out.println();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }

        TreeSet<Character>st=new TreeSet<>(Comparator.naturalOrder());
        for(int i=0; i<n; i++)
        {
            char c=sc.next().charAt(0);
            st.add(c);
        }
        System.out.println();
        for(char c:st)
        {
            System.out.println(c);
        }
        int c='a';
        char d='a';
        int b=d;
        System.out.println(b);
        // sc.close();
        
    }
}
