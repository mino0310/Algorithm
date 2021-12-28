public class sum_divisor {
    public int solution(int left, int right) {

		int sum = 0;
		for (int i = left; i <= right; i++) {
			calculator calculator = new calculator(i);
			int divisorCnt = calculator.calcDivisor();
			if (divisorCnt % 2 == 0) {
				sum += i;
			} else {
				sum -= i;
			}
		}
		return sum;
	}

	static class calculator{
		int cnt = 0;
		int calculated_num;

		public calculator(int calculated_num) {
			this.calculated_num = calculated_num;
		}

		public int calcDivisor() {
			for (int i = 1; i <= calculated_num; i++) {
				if (calculated_num % i == 0) {
					cnt++;
				}
			}
			return cnt;
		}
	}
}
