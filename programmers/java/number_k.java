public class number_k {
    public static int[] solution(int[] array, int[][] commands) {

		List<Integer> list = new ArrayList<>();

		for (int[] command : commands) {
			int[] sub = Arrays.copyOfRange(array, command[0] - 1, command[1]);
			Arrays.sort(sub);
			list.add(sub[command[2] - 1]);
		}
		return list.stream().mapToInt(i -> i.intValue()).toArray();
	}

}
