import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;

public class boj_1546 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Integer input = Integer.parseInt(br.readLine());

        // 성적 배열
        double[] inputs = Arrays.stream(br.readLine().split(" ")).mapToDouble(Double::parseDouble).toArray();
        // 최댓값
        double max = Arrays.stream(inputs).max().getAsDouble();



        double[] list = new double[input];

        for (int i = 0; i < inputs.length; i++) {

            list[i] = inputs[i] / max;
        }

        double res = Arrays.stream(list).average().getAsDouble();

        System.out.println(res * 100);

    }
}
