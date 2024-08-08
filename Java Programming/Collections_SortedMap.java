import java.util.*;
import java.util.Map;

class Pair{
    private int x,y;
    public Pair(int a, int b)
    {
        this.x=a;
        this.y=b;
    }

    Pair values()
    {
        return new Pair(x,y);
    }

    public String toString()
    {
        return x+","+y;
    }
}

public class Collections_SortedMap {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Map<Integer, String>mp=new TreeMap<>();
        for(int i=0; i<n; i++)
        {
            int x=sc.nextInt();
            String y=sc.next();
            mp.put(x,y);
        }
        for(Map.Entry<Integer,String>e:mp.entrySet())
        {
            System.out.println(e.getKey()+ " "+ e.getValue());
        }
        for(Integer x:mp.keySet())
        {
            System.out.println(x);
        }

        for(String x:mp.values())
        {
            System.out.println(x);
        }
        // Pair p1=new Pair(2, 3);
        // System.out.println(p1.toString());
        // SortedMap<String,Integer>mp1=new TreeMap<>(Comparator.naturalOrder());
        // for(int i=0; i<n; i++)
        // {
        //      String temp=sc.next();
        //     int x=sc.nextInt();
           
        //     mp1.put(temp,x );
        // }

        // for(Map.Entry<String,Integer>e:mp1.entrySet())
        // {
        //     System.out.println(e.getKey()+" "+e.getValue());
        // }

        // Map<Integer,Integer>nsmp=new TreeMap<>();

        // for(Map.Entry<Integer,Integer>p:nsmp.entrySet())
        // {
        //     System.out.println(p.getKey()+" "+p.getValue());
        // }


        sc.close();
    }
}
