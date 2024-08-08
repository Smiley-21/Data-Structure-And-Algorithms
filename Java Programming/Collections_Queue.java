import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.*;

public class Collections_Queue {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer>arr=new ArrayList<>();
        for(int i=0; i<n; i++)
        {
            arr.add(sc.nextInt());
        }
        Queue<Integer>q=new LinkedList<Integer>(arr);
        for(int i=0; i<n; i++)
        {
            int x=sc.nextInt();
            q.add(x);

        }
        while(!q.isEmpty())
        {
            System.out.println(q.poll());

        }

        sc.close();
    }
}
