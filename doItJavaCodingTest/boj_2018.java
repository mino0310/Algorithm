import java.io.*;
import java.util.*;
/**
 1. 문제해석
 연속된 자연수의 합으로 N이 되는 경우의 수를 구하라.
 Hint1. 연속된 자연수
 Hint2. 시간복잡도를 줄여야 한다. -> 수학/알고리즘/자료구조/구간합

 구간합을 구해야 한다. -> 구간합 배열을 사용하여 시간복잡도를 감소시킨다.
 합배열을 통해서 구간합을 구하고, 구간합의 순서쌍을 통해서 합을 찾는다.
 그렇게 찾은 합이 주어진 숫자와 같은지 비교하여 경우의 수를 올려준다.
 시간복잡도 O(N)

 */

public class boj_2018 {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        long count = 0L;

        int N = sc.nextInt();
        int[] sumArr = new int[N + 1];

        sumArr[1] = 1;

        // 합 배열을 구한다. (합 구하는 시간복잡도를 줄이기 위함.)
        for (int i = 2; i <= N; i++) {
            sumArr[i] = sumArr[i - 1] + i;
        }

        // 시작점과 종료지점을 초기화한다.
        // Two Pointer 알고리즘을 사용하기 위함이며, 구간합으로부터 N에 해당하는 순서쌍을 구하는 데 들어가는 시간 복잡도를 줄이기 위함.
        int startPoint, endPoint, tmpSum;
        startPoint = endPoint = 1;
        tmpSum = 0;

        while (startPoint <= N) {
            // 시작점과 종료지점의 구간합을 구한다.
            // S[i] - S[j - 1] : j ~ i 까지의 구간합.
            tmpSum = sumArr[endPoint] - sumArr[startPoint - 1];

            //N과 비교한다.
            if (tmpSum >= N) {
                if (tmpSum == N) {
                    count++;
                }
                startPoint++;
                endPoint = startPoint;
            } else {
                endPoint++;
            }
        }
        System.out.println(count);
    }
}