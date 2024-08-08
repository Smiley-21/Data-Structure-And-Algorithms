import java.util.*;
class Pair<I> {
    I a,b;
    
    Pair(I a, I b)
    {
        this.a=a;
        this.b=b;
    }

}

public class Collections_HashSet {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        // String temp=sc.nextLine();

        // Set<Integer> st=new HashSet<>();
        // for(int i=0; i<n; i++)
        // {
        //     int x=sc.nextInt();
        //     st.add(x);
        // }
        // System.out.println(st.size());
        // st.remove(3);
        // System.out.println(st.size());
        // boolean flag=st.contains(1);
        // if(flag==true)
        // {
        //     System.out.println("Returning True");
        // }

        // for(Integer x:st)
        // {
        //     System.out.println(x);
        // }
        // List<List<Pair>>adj=new ArrayList<>();
        // 2->4 4
        //3 -5 5
        //4-9 6
        //7 -11 8
        // for(int i=0; i<12; i++)
        // {
        //     adj.add(new ArrayList<Pair>());
        // }
        // for(int i=0; i<4;i++)
        // {
        //     // int u=sc.nextInt();
        //     // int v=sc.nextInt();
        //     // int w=sc.nextInt();
        //     int u=sc.nextInt(),v=sc.nextInt(),w=sc.nextInt();
        //     adj.get(u).add(new Pair(v,w));

        // }

        // System.out.println();
        // System.out.println(flag);
        // Iterator<Integer>it=st.iterator();
        // while(it.hasNext())
        // {
        //     System.out.println(it.next());
        // 

        // Set<String>orderedSet=new LinkedHashSet<>();
        // for(int i=0; i<n; i++)
        // {
        //     String s=sc.next();
        //     orderedSet.add(s);
        // }
        // Iterator<String>it=orderedSet.iterator();
        // while(it.hasNext())
        // System.out.println(it.next());
        // System.out.println(orderedSet.size());

        // for(String s:orderedSet)
        // {
        //     System.out.println(s);
        // }

        
         Set<String>orderedSet2=new TreeSet<>();
         for(int i=0; i<n; i++)
        {
            String s=sc.next();
            orderedSet2.add(s);
        }
        for(String s:orderedSet2)
        {
            System.out.println(s);
        }
        sc.close();


    }
}
