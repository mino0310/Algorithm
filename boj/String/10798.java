import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr_len = new int[5];

        char[][] map = new char[5][15];
        for (int i = 0; i < 5; i++) {
            String str = br.readLine();
            arr_len[i] = str.length();
            for (int j = 0; j < str.length(); j++) {
                map[i][j] = str.charAt(j);
            }
        }

        StringBuilder sb = new StringBuilder();
        int max_len = Arrays.stream(arr_len).max().getAsInt();

        for (int i = 0; i < max_len; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr_len[j] == 0) continue;
                sb.append(map[j][i]);
                arr_len[j]--;
            }
        }
        System.out.println(sb);
    }
}
