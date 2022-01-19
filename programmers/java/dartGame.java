package com.example.codingTest;

import java.util.StringTokenizer;

public class dartGame {

    public static void main(String[] args) {

        int solution = solution("1S*2T*3S");
        System.out.println("solution = " + solution);
    }

    public static int solution(String dartResult) {
        int totalScore = 0, score = 0;
        double[] scoreList = new double[3];

        // 문자열 파싱
        String replacedString = dartResult.replaceAll("[0-9]", " ");
        String replacedNumber = dartResult.replaceAll("[^0-9]", " ");
        StringTokenizer stringSt = new StringTokenizer(replacedString);
        StringTokenizer numberSt = new StringTokenizer(replacedNumber);


        for (int i = 0; i < 3; i++) {
            String optionAndBonus = stringSt.nextToken();
            double tmpScore = Double.valueOf(numberSt.nextToken());
            scoreList[i] = tmpScore;

            String bonus = null;
            String option = null;
            if (optionAndBonus.length() > 1) { // 옵션이 있다는 말
                bonus = optionAndBonus.replaceAll("[*#]", "");
                option = optionAndBonus.replaceAll("[^*#]", "");
            } else { // 옵션이 없으면
                bonus = optionAndBonus;
            }
            // bonus
            if (bonus.equals("D")) {
                scoreList[i] = Math.pow(scoreList[i], 2);
            } else if (bonus.equals("T")) {
                scoreList[i] = Math.pow(scoreList[i], 3);
            }
            // option
            if (option != null &&option.equals("*")) {
                if (i != 0) {
                    scoreList[i] = scoreList[i] * 2;
                    scoreList[i - 1] = scoreList[i - 1] * 2;
                } else { // 0. 첫번째에 나왔단 이야기.
                    scoreList[i] = scoreList[i] * 2;
                }
            } else if (option != null && option.equals("#")) {
                scoreList[i] = scoreList[i] * (-1);
            }
        }
        for (double v : scoreList) {
            totalScore += v;
            System.out.println("v = " + v);
        }

        return Integer.valueOf(totalScore);
    }
}

