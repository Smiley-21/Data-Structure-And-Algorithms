import java.util.Scanner;

public class C_Subsequences{
    private static class Fenwick{
        long f[];
        public Fenwick(int n)
        {
            f=new long[n+1];
        }

        public void add(int idx, long val)
        {
            while(idx<f.length)
            {
                f[idx]+=val;
                idx=idx+(idx&(-idx));
            }
        }
        public long get(int idx)
        {
            long sum=0;
            while(idx>0)
            {
                sum+=f[idx];
                idx=idx-(idx &(-idx));
            }
            return sum;
        }
    }

    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        if(k==0)
        {
            System.out.println(1);
            System.exit(0);
        }

        Fenwick []dp=new Fenwick[k];
        for(int i=0; i<k; i++)
        {
            dp[i]=new Fenwick(n);
        }
        long res=0;
        for(int i=0; i<n; i++)
        {
            int x=sc.nextInt();
            // When length of subsequence is zero then 1 number of possible required
            // subsequence
            dp[0].add(x,1);
            for(int j=1; j<k; j++)
            {
                dp[j].add(x,dp[j-1].get(x-1));
            }
            res+=dp[k-1].get(x-1);
        }
        System.out.println(res);
        sc.close();
    }
}