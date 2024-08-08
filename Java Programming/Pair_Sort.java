
import java.util.*;

class Pair<I> {
    I a, b;

    Pair(I a, I b) {
        this.a = a;
        this.b = b;
    }

    Pair() {

    }

    void print() {
        System.out.print(this.a + "  " + this.b + " \n");
    }
}

class cmp implements Comparator<Pair<Integer>> {

    public int compare(Pair<Integer> p1, Pair<Integer> p2) {
        return p1.a - p2.a;
    }
}

public class Pair_Sort {
    public static void main(String[] args) {
        List<Pair<Integer>> arr = new ArrayList<>();

        for (int i = 0; i < 20; i++) {
            arr.add(new Pair<Integer>((int) (Math.random() * 20), (int) (Math.random() * 20)));
        }
        Collections.sort(arr, new cmp());

        for (Pair<Integer> p : arr) {
            p.print();
        }

    }
}
