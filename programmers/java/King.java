package com.example.codingTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class King {
    public static void main(String[] args) throws IOException {
        int[][] map = new int[52][52];
        int[] dx = new int[]{-1, 0, 1, 0};
        int[] dy = new int[]{0, -1, 0, 1};

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        String kingIdx = st.nextToken();
        String stoneIdx = st.nextToken();
        int count = Integer.parseInt(st.nextToken());
        Chess king = new Chess("king", kingIdx.charAt(0), Integer.parseInt(kingIdx.substring(1, 2)));
        Chess stone = new Chess("stone", stoneIdx.charAt(0), Integer.parseInt(stoneIdx.substring(1, 2)));

        for (int i = 0; i < count; i++) {
            String direction = br.readLine();
            king.move(direction, stone);
        }

        System.out.println("king.name = " + king.name);
        System.out.println("king.col = " + king.col);
        System.out.println("king.row = " + king.row);

        System.out.println("stone.name = " + stone.name);
        System.out.println("stone.col = " + stone.col);
        System.out.println("stone.row = " + stone.row);

    }


    static class Chess {
        String name;
        char col;
        int row;

        public Chess(String name, char col, int row) {
            this.name = name;
            this.col = col;
            this.row = row;
        }

        // 두 방향이 동시에 나올 경우 원자성 확보만 하면 해결할 것으로 보임
        private void move(String direction, Chess stone) {
            for (int i = 0; i < direction.length(); i++) {
                String newDirect = direction.substring(i, i + 1);
                if (newDirect.equals("R") && ((col + 1) < 9)) {
                    if (stone.row == this.row && stone.col == (this.col + 1)) {
                        stone.col++;
                    }
                    col++;
                } else if (newDirect.equals("L") && ((col - 1) > 0)) {
                    if (stone.row == this.row && stone.col == (this.col - 1)) {
                        stone.col--;
                    }
                    col--;
                } else if (newDirect.equals("T") && ((row + 1) < 9)) {
                    if (stone.row == (this.row + 1) && stone.col == this.col) {
                        stone.row++;
                    }
                    row++;
                } else if (newDirect.equals("B") && ((row - 1) > 0)) {
                    if (stone.row == (this.row - 1) && stone.col == this.col) {
                        stone.row--;
                    }
                    row--;
                }
            }
        }
    }

}