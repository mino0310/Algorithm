package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class LageCountOfThree {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        int rt = 0, lt, curr, cnt=0, digit = 1;

        int tmp = num;
        while (tmp != 0) {
            curr = tmp % 10;
            lt = num / (digit * 10);

            if (curr > 3) cnt += (lt + 1) * digit;
            else if (curr < 3) cnt += lt * digit;
            else cnt += lt * digit + rt + 1;

            rt = rt + curr * digit;
            tmp /= 10;
            digit *= 10;
        }

        System.out.println(cnt);

    }

    // 매우 큰 숫자가 나올 경우 시간 초과
    // 규칙성 발견을 하거나 효율적인 알고리즘을 도출해내야 함

    // Hint1 : 연속적인 자연수
    // Hint2 :


    // 일단 세보자고
    // 1 <= n < 3 : 0
    // 3 <= n < 10 : 1
    // 10 <= n < 100 : 8 + 11 : 19
    // 100 <= n < 1000 :

    // 아니면 자리수에 채울 수 있는 개수로 가볼까
    // 15 라고 하면
    // 2개 숫자가 들어갈 자리가 있음.

    // 일의자리엔 3이 하나 올 수 있고
    // 십의자리는 1이니까 3이 하나도 올 수 없음 -> 1의 자리에 따라야 하니 1.

    // 30 이라고 하자
    // 일의자리 넘게 있으니까 1의 자리에 들어갈 수 있는 3의 개수는 1개
    // 십의 자리는 3임.

    // 아닌가 하나씩 더해볼까

    // 30 이면
    // 일단 3보다 숫자가 크면 무조건 cnt = 1 로 시작
    // 십의 자리가 1일 때 3 -> 1++
    // 십의 자리가 2일 때 3 -> 1++
    // 십의 자리가 3일 때 일의자리 만큼++
    // 십의 자리가 4일 때 3 -> 1++
    // ...
    // 십의 자리가 9일 때 3 -> 1++

    // 100이라고 해보자고




}
