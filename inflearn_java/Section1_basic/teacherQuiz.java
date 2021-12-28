package Section1_basic;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
import java.util.stream.IntStream;

public class teacherQuiz {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int studentNum = Integer.parseInt(br.readLine());

		List<String> list = new ArrayList<>();
		for (int i = 1; i <= studentNum; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			Integer num = Integer.valueOf(st.nextToken());
			Integer sumByStudent = Integer.valueOf(st.nextToken());
			int sum = IntStream.rangeClosed(0, num).sum();
			if (sum == sumByStudent) {
				list.add("YES");
			} else {
				list.add("NO");
			}
		}
		for (String s : list) {
			System.out.println(s);
		}
	}
}
