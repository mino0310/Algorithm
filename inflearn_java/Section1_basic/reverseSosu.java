import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class reverseSosu {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		while (st.hasMoreTokens()) {
			StringBuffer tmp_reverse = new StringBuffer(st.nextToken()).reverse();
			String reverse = String.valueOf(tmp_reverse);
			int tmp = Integer.parseInt(reverse);
			if (isPrime(tmp)) {
				System.out.println(tmp + " ");
			}
		}
	}

	public static boolean isPrime(int n) {
		if (n == 1) {
			return true;
		}

		for (int i = 2; i <= Math.sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}
