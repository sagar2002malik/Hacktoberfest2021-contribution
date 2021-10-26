import java.util.*;
import java.io.*;

public class stringCompression {

    public static String Compression(String s)
    {
        String a=s.charAt(0)+"";
        for(int i =1;i<=s.length();i++)
        {
            char prev =s.charAt(i-1);
            char curr=s.charAt(i);
            if(curr !=prev)
            {

                a+=curr;
                
            }
        }

        return a;
    }

    public static void main(String [] args)
    {
        Scanner scn =new Scanner(System.in);
        String s=scn.nextLine();
        System.out.println(Compression(s));
        
        
    }
}

