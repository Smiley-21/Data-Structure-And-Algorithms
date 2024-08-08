import java.util.ArrayList;
import java.util.*;

public class Collections_List {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        // int n=sc.nextInt();
        // for(int i=0; i<n; i++)
        // {
        // int x=sc.nextInt();
        // arr.add(x);
        // }

        // for(int i=0; i<n; i++)
        // System.out.println(arr.get(i));
        // arr.add(6);
        // System.out.println(arr);

        int m = sc.nextInt();
        int n = sc.nextInt();
        ArrayList<ArrayList<Integer>> v1 = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            ArrayList<Integer> temp = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                int x = sc.nextInt();
                temp.add(x);
            }
            v1.add(temp);
        }

        // a [10][20][40];

        List<List<List<Integer>>> v2 = new ArrayList<>();
        for (int i = 0; i < 2; i++) {
            v2.add(new ArrayList<>());
            for (int j = 0; j < 2; j++) {
                v2.get(i).add(new ArrayList<>());
                for(int k=0; k<5; k++)
                {
                    v2.get(i).get(j).add(sc.nextInt());
                }
            }
        }

        for (int i = 0; i < 2; i++) {
            // v2.add(new ArrayList<>());
            for (int j = 0; j < 2; j++) {
                // v2.get(i).add(new ArrayList<>());
                for (int k = 0; k < 5; k++) {
                    System.out.print(v2.get(i).get(j).get(k));
                }
                System.out.println();
            }
        }


        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(v1.get(i).get(j) + " ");
            }
            System.out.println();
        }

    }
}
