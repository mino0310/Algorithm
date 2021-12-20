public class sum_digit {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int count = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		int max = 0, res = 0, sum = 0;
		
		for (int i = 0; i < count; i++) {
			int value = Integer.parseInt(st.nextToken());
			sum = digit_sum(value);
			if (sum > max) {
				max = sum;
				res = value;
			} else if (sum == max) {
				res = value > res ? value : res;
			}
		}
		System.out.println(res);

	}
	public static int digit_sum(int x) {
		int sum = 0;
		while (x != 0) {
			sum += x % 10;
			x /= 10;
		}
		return sum;
	}
}
