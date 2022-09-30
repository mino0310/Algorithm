import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class boj_10270 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        int sum = Arrays.stream(br.readLine().split("")).mapToInt(Integer::parseInt).sum();

        System.out.println("sum = " + sum);
    }
}
