package Section1_basic;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.*;
import java.io.InputStreamReader;
public class noize {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int time = Integer.parseInt(st.nextToken());
		int limit = Integer.parseInt(st.nextToken());
		StringTokenizer st2 = new StringTokenizer(br.readLine());
		int max = 0;
		int tmp = 0;

		while (st2.hasMoreElements()) {
			int sound = Integer.parseInt(st2.nextToken());
			if (sound > limit) {
				tmp++;
			} else {
				tmp = 0;
			}
			if (tmp > max) max = tmp;
		}
		if (max == 0) System.out.println(-1);
		else System.out.println(max);
	}
}
