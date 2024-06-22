//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();
            
            Solution ob = new Solution();
            System.out.println(ob.isPalindrome(S));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    int isPalindrome(String S) {
        // code here
        // String str=" ";
        StringBuffer sb= new StringBuffer(S);
        sb.reverse();
        for(int i=0;i<S.length();i++){  
            
            if(sb.charAt(i)!=S.charAt(i))
               return 0;
        
        }
        return 1;
    }
};