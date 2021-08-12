#include <stdio.h>
#include <vector>
#include <algorithm>


int arr[1001];

int main(void)
{
	int now_cnt = 0, song_num, dvd_cnt, i, j, tmp, lt = 0, rt, running_time = 0, proper_volume = 0;

	scanf("%d %d", &song_num, &dvd_cnt);

	std::vector<int> input;
	for (i = 0; i < song_num; i++) {
		scanf("%d", &tmp);
		running_time += tmp;
		input.push_back(tmp);
	}
	sort(input.begin(), input.end());
	printf("zzz\n");
	rt = song_num - 1;
	i = 0;
	while (1) {
		proper_volume += i;
		int tmp_cnt = dvd_cnt;
		tmp = 0;
		printf("????\n");
		for (j = 0; now_cnt < dvd_cnt; j++) {
			tmp += input[j];
			if (tmp > proper_volume) {
				now_cnt++;
				tmp = 0;
			}
		}
		i++;
		if (j == song_num) {
			printf("%d", proper_volume);
			break ;
		}
	}

	// for (i = 0; i < song_num; i++) {
	// 	tmp_cnt = dvd_cnt;
	// 	for (j = 0; j < song_num; j++) {
	// 		if (tmp_cnt > dvd_cnt) {
	// 			break ;
	// 		}
	// 	}
	// }

	// while (lt <= rt) {

	// }

	// for (i = 0; i < song_num; i++) {
	// 	printf("%d", input[i]);
	// }

	return 0;
}

/* 
  왜 이문제에 이분탐색을 써야 하는지 생각하지 못하면 다음에도 떠올리지 못한다.
  왜 이문제에 이분탐색을 써야하지.
  이분탐색은 정렬된 자료에 사용된다. 자료를 정렬할 수 있으면 사용하는 것이 좋다.
  어디에 이분탐색을 주로 사용? 정렬된 자료들에서 해당 숫자가 있어야 할 자리를 찾을 때 사용
  노래 곡들의 시간을 전부 더하면 노래의 총 길이가 나온다. 콘서트의 총 길이지. 이 역시 활용해야지
  
  이를 주어진 dvd 개수로 나누어야 한다. 이때 dvd의 최소용량을 구하는 문제다. dvd가 무한정 커버리면 충분히 3덩어리로
  담을 수 있지만 최소용량을 구하는 문제다. 용량의 낭비가 최고로 적은 경우를 구해야 하는 문제.
  
 


*/