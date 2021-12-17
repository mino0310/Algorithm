public class sosu {
    static int cnt = 0;

	public static int solution(int[] nums) {

		boolean[] ch = new boolean[nums.length];
		comb(nums, ch, 0, nums.length, 0);
		return cnt;
	}

	public static void comb(int[] nums, boolean[] ch, int start_idx, int last_idx, int level) {
		if (level == 3) {
			int sum = 0;
			for (int i = 0; i < last_idx; i++) {
				if (ch[i] == true) {
					sum += nums[i];
				}

			}
			if (isPrime(sum)) {
				cnt++;
			}
			return;
		} else {
			for (int i = start_idx; i < last_idx; i++) {
				ch[i] = true;
				comb(nums, ch, i + 1, last_idx, level + 1);
				ch[i] = false;
			}
		}

	}

	public static boolean isPrime(int n) {
		if (n <= 1) {
			return false;
		}
		int limit = (int) Math.sqrt(n);
		for (int i = 2; i <= limit; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}
