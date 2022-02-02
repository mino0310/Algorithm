

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CardGame {

    public static void main(String[] args) throws IOException {

        String answer ="";

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st1 = new StringTokenizer(br.readLine());
        StringTokenizer st2 = new StringTokenizer(br.readLine());

        User userA = new User(false,0);
        User userB = new User(false,0);

        for (int i = 0; i < 10; i++) {
            int a = Integer.parseInt(st1.nextToken());
            int b = Integer.parseInt(st2.nextToken());
            if (a > b) {
                userA.setScore(userA.getScore() + 3);
                userA.setLastWin(true);
                userB.setLastWin(false);
            } else if (a < b) {
                userB.setScore(userB.getScore() + 3);
                userB.setLastWin(true);
                userA.setLastWin(false);
            } else {
                userA.setScore(userA.getScore() + 1);
                userB.setScore(userB.getScore() + 1);
            }
        }
        System.out.println(userA.getScore() + " " + userB.getScore());
        if (userA.getScore() == userB.getScore()) {
            // 비겼는데 둘다 이긴 적이 없을 때
            if (userA.isLastWin() && userB.isLastWin()) {
                answer += "D";
            } else {
                answer += userA.isLastWin() ? "A" : "B";
            }
        }
        else { // 두 점수가 다를 때
            answer += userA.getScore() > userB.getScore() ? "A" : "B";
        }

        System.out.println(answer);
    }


    static class User {
        boolean lastWin;
        int score;

        public User(boolean win, int score) {
            this.lastWin = win;
            this.score = score;
        }

        public boolean isLastWin() {
            return lastWin;
        }

        public void setLastWin(boolean lastWin) {
            this.lastWin = lastWin;
        }

        public int getScore() {
            return score;
        }

        public void setScore(int score) {
            this.score = score;
        }
    }
}