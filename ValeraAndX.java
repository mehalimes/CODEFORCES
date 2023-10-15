import java.util.*;
import java.lang.*;

public class ValeraAndX {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char[][] grid = new char[n][n];
        for(int i = 0; i < n; i++){
            String s = sc.next();
            for(int j = 0; j < s.length(); j++){
                grid[i][j] = s.charAt(j);
            }
        }
        Set<Character> diag = new HashSet<Character>();
        Set<Character> others = new HashSet<Character>();
        for(int i = 0, j = 0; i < n && j < n; i++, j++){
            diag.add(grid[i][j]);
        }
        for(int i = 0, j = n-1; i < n && j >= 0; i++, j--){
            diag.add(grid[i][j]);
        }
        for(int i = 0, j = 0; i < n && j < n; i++, j++){
            grid[i][j] = '#';
        }
        for(int i = 0, j = n-1; i < n && j >= 0; i++, j--){
            grid[i][j] = '#';
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] != '#'){
                    others.add(grid[i][j]);
                }
            }
        }
        if(others.size() == 1 && diag.size() == 1 && diag.iterator().next() != others.iterator().next()){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
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