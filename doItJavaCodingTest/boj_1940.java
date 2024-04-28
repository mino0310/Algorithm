import java.util.*;
import java.io.*;

/**
 1. 문제 해석
 고유한 숫자들의 연속이 제공되는데, 그 숫자들의 불연속적인 합이 M과 같은 경우의 수를 계산하라.

 Hint1. 고유한 숫자. 앞 숫자와 뒤의 숫자가 M과 같아버리면 뒤는 검사할 필요도 없다
 Hint2. 불연속적인 합 -> 투포인터 사용.
 Hint3. 투포인터 -> 배열이 연속적일 경우 효과적으로 사용할 수 있음. 경우의 수를 대폭 감소시킬 수 있음.
 */


public class boj_1940 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int M = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        int startPoint, endPoint, tmpSum;
        int count = 0;

        StringTokenizer st = new StringTokenizer(br.readLine());

        for (int i = 0 ; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        // 투포인터 알고리즘으로 시간 복잡도를 줄여야하고,
        // 투포인터 알고리즘을 통해 경우의 수를 줄여내기 위해 정렬을 시행한다.
        // 정렬을 하면 앞과 뒤로부터 값을 하나씩 선택함에 있어서 경우의 수를 효과적으로 구할 수 있다.
        // 두개값을 잡은다음에 M보다 크면 뒤의 값을 줄이면 되고,
        // M보다 작으면 앞의 값을 올리면 된다.
        // 알고리즘이 매우 간편해지고 시간복잡도도 줄어들게 된다.
        Arrays.sort(arr);
        startPoint = 0;
        endPoint = N - 1;
        while (startPoint < endPoint){
            if (arr[startPoint] + arr[endPoint] < M) startPoint++;
            else if (arr[startPoint] + arr[endPoint] > M) endPoint--;
            else {
                count++;
                startPoint++;
                endPoint--;
            }

        }
        System.out.println(count);
    }
}