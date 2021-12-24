
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class total_count {
    
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int input = Integer.valueOf(br.readLine()).intValue();

		int cnt = 0;
		for (int i = 1; i <= input; i++) {
			int tmp = 0;
			int num = i;
			while (num != 0) {
				num /= 10;
				tmp++;
			}
			cnt += tmp;
		}
		System.out.println(cnt);
	}
}
