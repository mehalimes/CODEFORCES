import java.util.*;
import java.lang.*;

public class Xsum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int tc = 0; tc < t; tc++){
            int n = sc.nextInt(), m = sc.nextInt();
            long[][] grid = new long[n][m];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    long val = sc.nextLong();
                    grid[i][j] = val;
                }
            }
            long[][] ans_grid = new long[n][m];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    ans_grid[i][j] = 0L;
                }
            }
            long mx = Integer.MIN_VALUE;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    int sum = 0;
                    int pos1 = i;
                    int pos2 = j;
                    while(pos1 >= 0 && pos2 >= 0){
                        sum += grid[pos1][pos2];
                        pos1--;
                        pos2--;
                    }
                    pos1 = i;
                    pos2 = j;
                    while(pos1 < n && pos2 < m){
                        sum += grid[pos1][pos2];
                        pos1++;
                        pos2++;
                    }
                    pos1 = i;
                    pos2 = j;
                    while(pos1 >= 0 && pos2 < m){
                        sum += grid[pos1][pos2];
                        pos1--;
                        pos2++;
                    }
                    pos1 = i;
                    pos2 = j;
                    while(pos1 < n && pos2 >= 0){
                        sum += grid[pos1][pos2];
                        pos1++;
                        pos2--;
                    }
                    pos1 = i;
                    pos2 = j;
                    sum -= (3*grid[i][j]);
                    mx = Math.max(sum, mx);
                }
            }
            System.out.println(mx);
        }
        sc.close();
    }
}

class Pair {
    private long key;
    private long value;

    public Pair(long key, long value) {
        this.key = key;
        this.value = value;
    }

    public long getKey() {
        return key;
    }

    public long getValue() {
        return value;
    }
}