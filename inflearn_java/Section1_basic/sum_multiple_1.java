package Section1_basic;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class sum_multiple_1 {

	public static void main(String[] args) throws IOException {
		int a, b, sum;
		BufgferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();
		StringTokenizer st = new StringTokenizer(s);
		a = Integer.valueOf(st.nextToken());
		b = Integer.valueOf(st.nextToken());

		sum = 0;
		for (int i = 1; b * i <= a; i++) {
			sum += b * i;
		}
		System.out.println("sum = " + sum);

	}
}