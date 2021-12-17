package java;
public static int[] solution(int[] lottos, int[] win_nums) {

    int correct_cnt = 0, zero_cnt = 0, score = 0;
    HashSet<Integer> set = new HashSet<>();
    for (int i = 0; i < win_nums.length; i++) {
        set.add(Integer.valueOf(win_nums[i]));
    }

    for (int i = 0; i < lottos.length; i++) {

        if (set.contains(Integer.valueOf(lottos[i]))) {
            correct_cnt++;
        } else if (lottos[i] == 0){
            zero_cnt++;
        }
    }
    int max_rank, min_rank;
    if (correct_cnt > 1)
        max_rank = 7 - correct_cnt;
    else
        max_rank = 6;
    min_rank = max_rank - zero_cnt;
    if (min_rank == 0) min_rank = 1;
    int[] answer = {min_rank, max_rank};
    return answer;
}