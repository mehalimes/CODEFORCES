import java.util.*;
import java.lang.*;
// codeforces solution
public class CountTheNumberOfPairs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        for(long tc = 0; tc < t; tc++){
            long n = sc.nextLong(), k = sc.nextLong();
            String s = sc.next();
            long[][] freq_ar = new long[26][2];
            for(int i = 0; i < 26; i++){
                freq_ar[i][0] = 0;
                freq_ar[i][1] = 0;
            }
            for(int i = 0; i < s.length(); i++){
                if(s.charAt(i) >= 65 && s.charAt(i) <= 90){
                    freq_ar[s.charAt(i)-65][0] += 1;
                }
                else if(s.charAt(i) >= 97 && s.charAt(i) <= 122){
                    freq_ar[s.charAt(i)-97][1] += 1;
                }
            }
            long ans = 0;
            for(int i = 0; i < 26; i++){
                ans += Math.min(freq_ar[i][0],freq_ar[i][1]);
                long temp = (long)Math.min(k, Math.abs(freq_ar[i][0]-freq_ar[i][1])/2);
                ans += temp;
                k -= temp;
            }
            System.out.println(ans);
        }
        sc.close();
    }
}

class Triple {
    private char one;
    private long two;
    private long three;

    public Triple(char one, long two, long three){
        this.one = one;
        this.two = two;
        this.three = three;
    }
    public char getOne(){
        return one;
    }
    public long getTwo(){
        return two;
    }
    public long getThree(){
        return three;
    }
}

class Pair {
    public long first;
    public long second;
    public Pair(long first, long second){
        this.first = first;
        this.second = second;
    }
    public long getFirst(){
        return first;
    }
    public long getSecond(){
        return second;
    }
}