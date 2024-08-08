import java.util.*;
class Pair<I>{
    I a,b;
    Pair(I a, I b)
    {
        this.a=a;
        this.b=b;
    }
}
public class Adjacency {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        // int n=sc.nextInt(), m=sc.nextInt();
        // List<List<Integer>>adj=new ArrayList<>();

        // for(int i=0; i<=n; i++)
        // {
        //     adj.add(new ArrayList<Integer>());
        // }

        // for(int i=0; i<m; i++)
        // {
        //     int u=sc.nextInt(),v=sc.nextInt();
        //     adj.get(u).add(v);
        //     adj.get(v).add(u);
        // }
        // int adj[n][];
        // PriorityQueue<Pair<Integer>>pq=new PriorityQueue<Pair<Integer>>(new Comparator<Pair<Integer>>() {
        //     public int compare(Pair<Integer>p1, Pair<Integer>p2)
        //     {
        //         if(p1.equals(p2))
        //         return 0;
        //         else
        //         return p1.b-p2.b;
        //     }
        // });
        PriorityQueue<List<Integer>>pq=new PriorityQueue<>(new Comparator<List<Integer>>(){
            public int compare(List<Integer>l1, List<Integer>l2)
            {
                if(l1.size()<=l2.size())
                return -1;
                else
                return 1;

            }
        });
        // pq.add(new Pair(2,3));
        // pq.add(new Pair(4,6));
        // pq.add(new Pair(10,4));
        // pq.add(new Pair(30,20));
  
       
        // pq.add(new ArrayList(2,3,4,5,6))

        // while(!pq.isEmpty())
        // {
        //     Pair<Integer>p=pq.poll();
        //     System.out.println(p.a+" "+p.b);
        // }



    }
}
