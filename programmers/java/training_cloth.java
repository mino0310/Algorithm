public class training_cloth {
    
    
	public static int solution(int n, int[] lost, int[] reserve) {
		int now = 0, max = 0;
		// 1. 일단 학생 수 만큼 배열을 만들자. 기본값 1
		int[] arr = new int[n + 1];
		for (int i = 1; i < arr.length; i++) {
			arr[i] = 1;
		}

		// 2. 그 다음 여벌 옷을 가져온 애들 값을 + 1 씩 하자.
		for (int i : reserve) {
			arr[i] += 1;
		}

		// 3. 잃어버린 애들 옷을 하나씩 빼자.
		for (int i : lost) {
			arr[i] -= 1;
		}
		// 4. 그러면 남는 건 진짜 여벌 옷을 가진 애들 + 없는 애들 + 가진 애들 이렇게 나뉨.
		// 5. 가진 애들(값이 1) 은 따지지 않아도 되고, 여벌 옷을 가진 애들이면 앞이나 뒤로 나누어줄 수 있으면 그쪽 값을 1로 만들어주고 차감.

		for (int i = 1; i < arr.length; i++) {
			if (arr[i] == 0) {
				if (arr[i - 1] > 1) {
					arr[i - 1]--;
					arr[i] = 1;
				} else if (i + 1 < arr.length && arr[i + 1] > 1) {
					arr[i + 1]--;
					arr[i] = 1;
				}
			}
		}
		for (int i = 1; i < arr.length; i++) {
			if (arr[i] >= 1) {
				now++;
			}
		}
		return now;
}
