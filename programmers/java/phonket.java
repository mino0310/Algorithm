import java.util.*;

public class phonket {
    
    public static int solution(int[] nums) {

		int pickCnt = nums.length / 2, raceCnt = 0;
		HashSet<Integer> ch = new HashSet<Integer>();
		for (int num : nums) {
			if (pickCnt > 0 && !ch.contains(num)) {
				ch.add(num);
				raceCnt++;
				pickCnt--;
			} else {
				continue;
			}
		}
		return raceCnt;
	}
}
