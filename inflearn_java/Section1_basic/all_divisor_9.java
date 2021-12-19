public class all_divisor_9 {
    public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Integer num = Integer.valueOf(br.readLine());

		int[] arr = new int[50001];

		for (int i = 1; i <= num; i++) {
			for (int j = i; j <= num; j += i) {
				arr[j]++;
			}
		}

		for (int i = 1; i <= num; i++) {
			System.out.print(arr[i] + " ");
		}
	}
}
