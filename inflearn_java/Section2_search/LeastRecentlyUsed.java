package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class LeastRecentlyUsed {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer[] cacheAndWork = Arrays.stream(br.readLine().split(" ")).map(Integer::valueOf).toArray(Integer[]::new);
        int cacheSize = cacheAndWork[0];
        int workCount = cacheAndWork[1];
        int[] workNum = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        int[] memory = new int[cacheSize];
        for (int i : memory) {
            i = 0;
        }
        int i,j;

        for (i = 0; i < workCount; i++) {
            int pos = -1;
            for (j = 0; j < cacheSize; j++) {
                if (memory[j] == workNum[i]) pos = j;
            }
            if (pos == -1) {
                for (j = cacheSize - 1; j >= 1; j--) {
                    memory[j] = memory[j - 1];
                }
            } else {
                for (j = pos; j >= 1; j--) {
                    memory[j] = memory[j - 1];
                }
            }
            memory[j] = workNum[i];
        }

        for (i = 0; i < cacheSize; i++) {
            System.out.print(memory[i]);

        }

        // 사용된지 오래되었다는 걸 표현해야 함.
        // 캐시 사이즈 만큼만 보관해야 함
        //

        // 뒤로 밀린다 이렇게 이해하지마라.
        // set에서 delete된다
        // 이렇게 이해할 것.

        // 나왔던 거면 해당 set에서 당겨오고
        // 나오지 않았던 거라면 가장 마지막에 사용된 걸 삭제 && 맨 앞으로 당기기

    }
    static class Work{
        int workNum;
        int notUsedTime;

        public Work(int workNum, int notUsedTime) {
            this.workNum = workNum;
            this.notUsedTime = notUsedTime;
        }

        public int getWorkNum() {
            return workNum;
        }

        public void setWorkNum(int workNum) {
            this.workNum = workNum;
        }

        public int getNotUsedTime() {
            return notUsedTime;
        }

        public void setNotUsedTime(int notUsedTime) {
            this.notUsedTime = notUsedTime;
        }
    }

}
