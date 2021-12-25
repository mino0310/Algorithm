import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class howManyUsed {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();

		int max = 0, idx = 0;
		int[] cnt = new int[101];
		for (int i = 0; i < input.length(); i++) {
			String substring = input.substring(i, i + 1);
			int res = Integer.parseInt(substring);
			cnt[res]++;

			if (cnt[res] > max){
				max = cnt[res];
				idx = res;
			}
		}
		System.out.println(idx);
	}
}
