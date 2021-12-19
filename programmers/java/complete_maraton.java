import java.util.*;

public class complete_maraton {
    public static String solution(String[] participant, String[] completion) {
		String answer = "";
		Map<String, Integer> maraton = new HashMap<>();

		for (String person : participant) {
			if (maraton.containsKey(person)) {
				maraton.put(person, maraton.get(person).intValue() + 1);
			} else {
				maraton.put(person, 1);
			}
		}

		for (String person : completion) {
			if (maraton.containsKey(person)) {
				if (maraton.get(person).intValue() > 1) {
					maraton.put(person, maraton.get(person).intValue() - 1);
				} else if (maraton.get(person).intValue() == 1) {
					maraton.remove(person);
				}
			}
		}

		Set<String> strings = maraton.keySet();
		for (String string : strings) {
			answer = string;
		}
		return answer;
	}
}
