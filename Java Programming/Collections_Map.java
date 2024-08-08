import java.util.*;
import java.util.Map;
public class Collections_Map {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        HashMap<Integer,String>mp=new HashMap<>();
        int n=sc.nextInt();
        for(int i=0; i<n; i++)
        {
            int x=sc.nextInt();
            String y=sc.next();
            mp.put(x, y);
            
        }

        // for only keys
        for(int x:mp.keySet())
        {
            System.out.println(x);
        }

        // for only values
        for(String x:mp.values())
        {
            System.out.println(x);
        }

        // for key and values simultaneously
        System.out.println();

        for(Map.Entry<Integer,String>e:mp.entrySet())
        {
            System.out.println(e.getKey()+" "+e.getValue());
        }

        // LinkedHashMap<Integer,String>lhmp=new LinkedHashMap<>();
        //  for(int i=0; i<n; i++)
        // {
        //     int x=sc.nextInt();
        //     String y=sc.next();
        //     lhmp.put(x, y);
            
        // }

        // for(Map.Entry<Integer,String>e:lhmp.entrySet())
        // {
        //     System.out.println(e.getKey()+" "+e.getValue());
        // }
        // 0-1
        // 10 -20
        // 3-15
        // -1- 20

        // SortedMap<Integer,Integer>smp=new SortedMap<Integer,Integer>();

        sc.close();


    }
}
