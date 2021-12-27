
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;


public class anagram {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String first = br.readLine();
		String second = br.readLine();
		Map<String, Integer> firstMap = new HashMap<>();
		Map<String, Integer> secondMap = new HashMap<>();

		for (int i = 0; i < first.length(); i++) {
			String firstSub = first.substring(i, i + 1);
			if (!firstMap.containsKey(firstSub)) {
				firstMap.put(firstSub, 1);
			} else {
				firstMap.put(firstSub, firstMap.get(firstSub) + 1);
			}
			String secondSub = second.substring(i, i + 1);
			if (!secondMap.containsKey(secondSub)) {
				secondMap.put(secondSub, 1);
			} else {
				secondMap.put(secondSub, secondMap.get(secondSub) + 1);
			}
		}

		Set<String> strings = firstMap.keySet();

		int flag = 0;
		for (String firstKey : strings) {
			if (firstMap.get(firstKey) != secondMap.get(firstKey)) {
				System.out.println("NO");
				flag = 1;
				break ;
			}
		}
		if (flag == 0) System.out.println("YES");
	}
}
