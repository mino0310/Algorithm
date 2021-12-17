package Section1_basic;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class diff_age_4 {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int people = Integer.valueOf(st.nextToken());

		List<Integer> list = new ArrayList<>();
		st = new StringTokenizer(br.readLine());

		for (int i = 0; i < people; i++) {
			list.add(Integer.valueOf(st.nextToken()));
		}

		Integer max = Collections.max(list);
		Integer min = Collections.min(list);

		System.out.println(max.intValue() - min.intValue());
	}
}
