public class reverse {

	public static int solution(int n) {
		int answer = 0;
		int digit = 1;
		StringBuilder sb = new StringBuilder();

		while (n != 0) {
			int rem = n % 3;
			sb.append(String.valueOf(rem));
			n /= 3;
		}
		Long tmp = Long.valueOf(sb.toString());
		while (tmp != 0) {
			Long val = tmp % 10;
			answer += val * digit;
			digit *= 3;
			tmp /= 10;
		}
		return answer;
	}
}
