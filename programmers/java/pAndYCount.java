package com.example.codingTest;

public class pAndYCount {
    public static void main(String[] args) {
        boolean pPoooyY = solution("pPoooyY");
    }

    static boolean solution(String s) {
        String lowerStr = s.toLowerCase();
        String p = lowerStr.replaceAll("[^p]", "");
        String y = lowerStr.replaceAll("[^y]", "");

        int cntOfP = p.length();
        int cntOfY = y.length();

        if ((cntOfP == 0 && cntOfY == 0) || (cntOfP == cntOfY)) {
            return true;
        } else {
            return false;
        }
    }
}
