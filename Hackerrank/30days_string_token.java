    
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scn = new Scanner(System.in);
        String inputstring = scn.nextLine();
        
        StringTokenizer tokenizer = new StringTokenizer(inputstring, " ![,?.\\_'@+]");
        int tokens = tokenizer.countTokens();
        System.out.println(tokens);
        while( tokenizer.hasMoreTokens())
            {
            System.out.println(tokenizer.nextToken());
        }
        
    }
}
