import java.util.*;
public class CollectionSet {
    public static void main(String []args)
    {
        Set<Integer> nums=new HashSet<Integer>();
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0; i<n; i++)
        {
            int x=sc.nextInt();
            nums.add(x);
        }
        System.out.println(nums);
        sc.close();
    }
    
}
