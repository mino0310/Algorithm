import java.util.*;

public class moigosa {
    List<Integer> list = new ArrayList<>();

    int[] cnt = {0, 0, 0};
    int max = 0;
    int[] first = {1,2,3,4,5};
    int[] second = {2, 1, 2, 3, 2, 4, 2, 5};
    int[] third = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    for (int i = 0; i < answers.length; i++) {
        if (first[i % 5] == answers[i]) cnt[0]++;
        if (second[i % 8] == answers[i]) cnt[1]++;
        if (third[i % 10] == answers[i]) cnt[2]++;
    }
    int[] arr = new int[cnt.length];
    for (int i = 0; i < cnt.length; i++) {
        arr[i] = cnt[i];
    }
    Arrays.sort(arr);
    for (int i = 0; i < arr.length; i++) {
        if (cnt[i] == arr[2]) {
            list.add(i + 1);
        }
    }

    return list.stream().mapToInt(m -> m.intValue()).toArray();
    
}
