public class Overloading {
    static int multiply(int a, int b) {
        return a * b;
    }

    public static int multiply(int a, int b, int c) {
        return a * b * c;
    }

    public static int multiply(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    public static void main(String args[]) {
        System.out.println(multiply(2, 4, 4, 12));
        System.out.println(multiply(2,9, 4));
        System.out.println(multiply(2, 3));
    }
}
