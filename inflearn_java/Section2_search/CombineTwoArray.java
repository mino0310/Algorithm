package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class CombineTwoArray {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int firstLen = Integer.parseInt(br.readLine());
        Integer[] firstArr = Arrays.stream(br.readLine().split(" ")).map(Integer::valueOf).sorted().toArray(Integer[]::new);
        int secondLen = Integer.parseInt(br.readLine());
        Integer[] secondArr = Arrays.stream(br.readLine().split(" ")).map(Integer::valueOf).sorted().toArray(Integer[]::new);

        int[] res = new int[firstLen + secondLen];
        int a = 0, b = 0, i;
        // 둘중 작은 숫자까지 반복하자. 남으면 그담엔 붙이면 됨.
        for (i = 0; i < firstLen + secondLen; i++) {
            // 만약 하나의 배열을 초과하면 이를 표시하고 반복을 끝내자
            if (a == firstLen || b == secondLen) {
                break;
            }
            // i 번쨰의 res 배열을 하나씩 채워나가면 된다.
            if (firstArr[a] < secondArr[b]) {
                res[i] = firstArr[a];
                a++;
            } else {
                res[i] = secondArr[b];
                b++;
            }
            // 두 숫자중 작은 숫자를 채워넣으면 된다.
            // 그러다가 개수가 적은 배열의 탐색이 끝나면 큰 배열의 나머지 값을 넣어주면 됨.
        }
        // 두 배열 중 하나의 배열이 덜 순회했으면 나머지를 붙연허자
        if (a < firstLen) {
            for (; i < firstLen + secondLen; i++) {
                res[i] = firstArr[a++];
            }
        } else {
            for (; i < firstLen + secondLen; i++) {
                res[i] = secondArr[b++];
            }
        }

        for (int re : res) {
            System.out.print(re + " ");
        }



    }

}
