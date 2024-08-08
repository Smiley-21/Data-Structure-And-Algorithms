import java.util.*;
import java.util.Map;


public class Collections_SortedMap_Comparator {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        SortedMap<String,String>mp1=new TreeMap<String,String>(new Comparator<String>(){
            public int compare(String a, String b)
            {
                return b.compareTo(a);
            }
        });

        
    }
}
