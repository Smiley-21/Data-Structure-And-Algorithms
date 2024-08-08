import java.util.*;
public class Maptest {
    public static void main(String args[])
    {
        TreeMap<Integer, Integer>mp=new TreeMap<>();
        Queue<Integer>q=new LinkedList<>();
        q.add(10);
        q.add(1);
        q.add(100);
        q.add(43);
        // mp.put(1,1);
        // mp.put(3,9);
        // mp.put(2,4);
        // mp.put(10,100);
        // mp.put(5,25);

        // for(int key:mp.keySet())
        // {
        //     System.out.println(mp.get(key));
        // }

        while(!q.isEmpty())
        {
            int x=q.poll();
            System.out.println(x);

        }
    }
}
