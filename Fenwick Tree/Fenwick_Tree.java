import java.util.*;
public class Fenwick_Tree{
    static int N=10005;
    static int Fen[]=new int[N];
    public static void update(int idx, int sum)
    {
        while(idx<N)
        {
            Fen[idx]+=sum;
            idx=idx+(idx &(-idx));
        }
    }

    public static int add(int idx)
    {
        int s=0;
        while(idx>0)
        {
            s+=Fen[idx];
            idx=idx-(idx &(-idx));
        }
        return s;
    }
    public static void main (String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0; i<n; i++)
        a[i]=sc.nextInt();
    }
}