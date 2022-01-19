package com.example.codingTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class BabyShark {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        List<Integer> allFishArray = new ArrayList<>();
        List<Fish> fishes = new ArrayList<>();

        // 맵 값 입력받고 외곽 경계 설정해서 맵 세팅
        int mapSize = Integer.parseInt(br.readLine());
        int[][] map = new int[mapSize + 2][mapSize + 2];
        // 시뮬레이션용 변수 배열 선언
        int[] deltaRow = new int[]{0, -1, 0, 1};
        int[] deltaCol = new int[]{-1, 0, 1, 0};
        // BFS용 자료구조 생성
        Queue<Integer> queue = new LinkedList<>();
        int[][] checked = new int[mapSize + 2][mapSize + 2];

        Shark shark = new Shark(0, 0, 2, 0);
        // fish input to map
        for (int i = 1; i <= mapSize; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int j = 1;
            while (st.hasMoreTokens()) {
                int fishValue = Integer.parseInt(st.nextToken());
                if (fishValue == 9) {
                    shark.setRow(i);
                    shark.setCol(j);
                    // 상어는 표시하지 않고 객체로만 생성. 나중에 귀찮아지는 거 방지.
                } else {
                    map[i][j] = fishValue;
                    allFishArray.add(fishValue);
                    fishes.add(new Fish(i, j, fishValue));
                    j++;
                }
            }
        }

        while (true) {
            // 먹을 수 있는 물고기의 수
            long remainCount = fishes.stream().filter(i -> i.size <= shark.size).count();
            if (remainCount == 0) {
                break ;
            } else if (remainCount == 1) {
                // 그 물고기만 비교
            } else {
                // 다른 물고기 탐색
                // 거리를 구해서 최소 거리의 물고기의 row, col을 구해서 먹으면 되지않나
            }

        }


        // 물고기 먹으면 해당 자리 0으로 만들고 리스트에서도 삭제.
        // 더 먹을 물고기가 있는지는 list stream으로 필터 돌려서 내 값보다 작은 게 있는지 리스트로
        // 뽑고 값이 empty 면은 종료.

        // BFS 돌기 전에 내가 먹을 수 있는 물고기가 있는지 체크. 없으면 바로 종료
        // 있으면 BFS 돈다.
        // BFS로 돌면 가장 가까운 것을 먼저 방문한다. 그러면 가장 가까운 물고기 찾기
        // fish.size > shark.size -> pass
        // fish.size == shark.size -> count++X, row & col update   BFS 끝
        // fish.size < shark.size -> adapted. count++, row & col update BFS 끝




        for (int i = 0; i < mapSize + 2; i++) {
            for (int j = 0; j < mapSize + 2; j++) {
                System.out.print(map[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println(shark.eatCount);

    }

    static abstract class InSea {
        int row;
        int col;
        int size;

        public InSea(int row, int col, int size) {
            this.row = row;
            this.col = col;
            this.size = size;
        }

        public int getRow() {
            return row;
        }

        public void setRow(int row) {
            this.row = row;
        }

        public int getCol() {
            return col;
        }

        public void setCol(int col) {
            this.col = col;
        }

        public int getSize() {
            return size;
        }

        public void setSize(int size) {
            this.size = size;
        }
    }

    static class Fish extends InSea {

        public Fish(int row, int col, int size) {
            super(row, col, size);
        }
    }

    static class Shark extends InSea {
        int eatCount;

        public Shark(int row, int col, int size, int eatCount) {
            super(row, col, size);
            this.eatCount = eatCount;
        }

        public int getEatCount() {
            return eatCount;
        }

        public void setEatCount(int eatCount) {
            this.eatCount = eatCount;
        }
    }

}