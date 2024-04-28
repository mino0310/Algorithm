import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
public class boj_11659 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


        int[] input = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int dataCount = input[0];
        int iterCount = input[1];
        int[] res = new int[iterCount];

        int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        int[] sumArr = new int[dataCount + 1];
        sumArr[0] = arr[0];
        sumArr[0] = 0;
        sumArr[1] = arr[0];

        for (int i = 2; i <= dataCount; i++) {
            sumArr[i] = sumArr[i - 1] + arr[i - 1];
        }

        System.out.println(":zz");
        for (int i = 0; i < iterCount; i++) {
            int[] in = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            int startPoint = in[1];
            int endPoint = in[0] - 1;
            int tmp = sumArr[startPoint] - sumArr[endPoint];
            res[i] = tmp;
        }

        System.out.println("zzzzzz");
        for (int re : res) {
            System.out.println("test =" + re);
        }
    }
}
