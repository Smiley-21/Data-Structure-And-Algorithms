import java.util.*;

public class Sorting_Comparator {
    public static void main(String args[])
    {
        Comparator<Integer>cmp=new Comparator<Integer>() {
            public int compare(Integer a, Integer b)
            {
                if(a<b)
                return 1;
                else
                return -1;
            }
        };
        List<Integer>nums=new ArrayList<Integer>();
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0; i<n; i++)
        {
            int x=sc.nextInt();
            nums.add(x);
        }

        Collections.sort(nums,cmp);
        System.out.println(nums);
    }
}
