
import java.util.*;
public class StringBuilder_Test {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        StringBuilder sb=new StringBuilder();
        sb.append('c');
        sb.append('d');
        sb.append('e');

        System.out.println(sb);
        ArrayList<Integer>arr=new ArrayList<>();
        Integer a[]=new Integer[10];

        for(int i=0; i<10; i++)
        a[i]=sc.nextInt();
        Arrays.sort(a,(i,j)->{
            return j-i;
        });

        System.out.println(Arrays.toString(a));
        Collections.reverse(arr);
    }
}
