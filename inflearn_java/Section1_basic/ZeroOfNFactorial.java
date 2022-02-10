package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ZeroOfNFactorial {

   public static void main(String[] args) throws IOException {
      int twoCnt = 0, fiveCnt = 0;
      int num;

      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      num = Integer.parseInt(br.readLine());

      for (int i = num; i >= 2; i--) {
         // 소인수 분해하기 - 소수오 인수인지 체크해서 나타내면 됨.
         // 굳이 소인수 분해할 필요 없이 2로 나눠지면 안 나눠질 때까지 나누면서 2의 개수 세고
         // 5로 나눠지면 안 나눠질 때까지 5로 나누며 5의 개수 세면 됨.

         // 5로 나누어 떨어지면
//         System.out.println("now num = " + i);
         int tmp = i;
         if (tmp % 5 == 0) {
            while (true) {
               fiveCnt++;
               tmp /= 5;
               if (tmp % 5 != 0) break;
            }
         }
//         System.out.println("now five cnt = " + fiveCnt);
         if (tmp % 2 == 0) {
            while (true) {
               twoCnt++;
               tmp /= 2;
               if (tmp % 2 != 0) break;
            }
         }
//         System.out.println("now two cnt = " + twoCnt);
      }
      int res = Math.min(fiveCnt, twoCnt);
      System.out.println("res = " + res);
   }


   public static boolean isPrime(int n) {
      if (n <= 1) return false;
      for (int i = 2; i <= Math.sqrt(n); i++) {
         if (n % i == 0) {
            return false;
         }
      }
      return true;
   }

}
