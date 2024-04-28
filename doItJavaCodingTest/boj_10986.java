import java.util.*;
import java.io.*;

public class boj_10986 {
    public static void main (String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken()); // 수의 개수
        int m = Integer.parseInt(st.nextToken()); // 합을 나누는 수
        long sum = 0;
        long[] C = new long[m];
        long answer = 0;

        st = new StringTokenizer(br.readLine());
        for(int i = 1; i < n+1; i++) {
            sum += Integer.parseInt(st.nextToken());
            sum %= m;
            C[(int)sum]++;
        }

        answer += C[0];
        for (int i = 0; i < m; i++) {
            if (C[i] > 1) answer +=  C[i] * (C[i] -1) / 2;
        }

        System.out.println(answer);


    }

}



