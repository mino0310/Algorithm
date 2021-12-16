package Section1_basic;
import java.util.StringTokenizer;
import java.util.stream.IntStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class sum_number_2 {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int a = Integer.valueOf(st.nextToken());
		int b = Integer.valueOf(st.nextToken());

		int res = IntStream.rangeClosed(a, b).sum();
		IntStream.rangeClosed(a, b).mapToObj(i -> i + " + ").forEach(System.out::print);
		System.out.println(b + " = " + res);

	}   
}
