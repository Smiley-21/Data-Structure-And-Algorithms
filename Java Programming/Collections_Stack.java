import java.util.*;
public class Collections_Stack {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        Stack<Integer>st=new Stack<>();
        int n=sc.nextInt();
        for(int i=0; i<n;i++)
        {
            int x=sc.nextInt();
            st.push(x);
        }

        while(!st.isEmpty())
        {
            int x=st.pop();
            System.out.print(x+" ");
        }
        sc.close();
    }
}
