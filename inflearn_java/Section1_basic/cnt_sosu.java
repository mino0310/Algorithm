import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class cnt_sosu {

    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int input = Integer.parseInt(br.readLine());
		int cnt = 0;

		for (int i = 1; i <= input; i++) {
			if (isPrime(i)) {
				cnt++;
			}
		}
		System.out.println("cnt = " + cnt);
	}

	public static boolean isPrime(int n) {
		if (n == 1) return false;

		for (int i = 2; i <= Math.sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}

}
