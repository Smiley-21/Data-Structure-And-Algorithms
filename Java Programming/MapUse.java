import java.util.*;

public class MapUse {
    public static void main(String []args)
    {
        Map<Integer,Integer> mp=new HashMap<Integer,Integer>();

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0; i<n; i++)
        {
           int key= sc.nextInt();
           int val=sc.nextInt();
           mp.put(key,val);

        }
        System.out.println(mp.get(5));
        System.out.println(mp);
        System.out.println(mp.keySet());
        for(int x:mp.keySet())
        {
            System.out.println(x);
        }
        sc.close();
    }
}
