import java.io.*;

import java.io.IOException;

public class InputBuffered {
    public static void main(String args[]) throws IOException
    {
        InputStreamReader in=new InputStreamReader(System.in);
        BufferedReader bf=new BufferedReader(in);
        System.out.println("Taking input");
        int num=Integer.parseInt(bf.readLine());
        System.out.println(num);
    }
}
