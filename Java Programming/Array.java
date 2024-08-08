import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

class SortbyRoll implements Comparator<Student> {
    public int compare(Student a, Student b) {
        int result=a.name.compareTo(b.name);
        return result;

    }
}

class Sortbyalpha implements Comparator<String>{
    public int compare(String a, String b)
    {
        int result=b.compareTo(a);
        return result;
    }
}

class Student {
    int rollno;
    String name, address;

    public Student(int rollno, String name, String address) {
        this.rollno = rollno;
        this.name = name;
        this.address = address;
    }

    public String toString() {
        return this.rollno + " " + this.name + " " + this.address;
    }
}

public class Array {

    public static void main(String args[]) {
        // int num1[] = { 13, 7, 6, 45, 21, 9, 2, 100 };
        // Integer num2[]={ 13, 7, 6, 45, 21, 9, 2, 100 };
        // int num2[] = new int[100];
        // int num3[][] = new int[3][4]; // jagged array

        // for (int x : num1)
        // System.out.println(x);

        // for (int x[] : num3) {
        // for (int y : x)
        // System.out.print(y + " ");
        // System.out.println();
        // System.out.println(num2.length);
        // }
        // Arrays.sort(num1,1,5);
        // System.out.println(Arrays.toString(num1));
        // Arrays.sort(num2,Collections.reverseOrder());
        // System.out.println(Arrays.toString(num2));

        // String arr[] = { "practice.geeksforgeeks.org",
        // "www.geeksforgeeks.org",
        // "code.geeksforgeeks.org" };
        // Arrays.sort(arr);
        // System.out.println(Arrays.toString(arr));

        Student[] arr = { new Student(111, "bbbb", "london"),
                new Student(131, "aaaa", "nyc"),
                new Student(121, "cccc", "jaipur") };
        System.out.println("Unsorted");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        Arrays.sort(arr,new SortbyRoll());
        System.out.println("Sorted");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        // String a="Saurabh";
        // String b="Saurabh";
        // System.out.println(a==b);

        // String a="aaa";
        // String b="bbb";
        // String c="A";
        // String d="B";
        // System.out.println(c.compareTo(d));
        ArrayList<String>arr1=new ArrayList<>();
        arr1.add("bbb");
        arr1.add("aaa");
        arr1.add("ccc");
       Collections.sort(arr1, new Sortbyalpha());
        System.out.println(arr1);

    }

}
