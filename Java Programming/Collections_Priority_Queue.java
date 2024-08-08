import java.util.*;
public class Collections_Priority_Queue {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        PriorityQueue<Integer>pq=new PriorityQueue<Integer>(Comparator.reverseOrder());
        for(int i=0; i<n; i++)
        {
            pq.add(sc.nextInt());
        }

        while(!pq.isEmpty())
        {
            System.out.println(pq.poll());

        }
       
        sc.close();
    }
}
