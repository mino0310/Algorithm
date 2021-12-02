class Solution {
    public String solution(int[] numbers, String hand) {

        StringBuilder sb = new StringBuilder();
        int left_idx = 10; 
        int right_idx = 12;

        for (int number : numbers) {
            if (number == 1 || number == 4 || number == 7) {
                sb.append("L");
                left_idx = number;
            } else if (number == 3 || number == 6 || number == 9) {
                sb.append("R");
                right_idx = number;
            } else {
                int leftLength = getLength(left_idx, number);
                int rightLength = getLength(right_idx, number);

                if (leftLength > rightLength){
                    sb.append("R");
                    right_idx = number;
                } else if (leftLength < rightLength) {
                    sb.append("L");
                    left_idx = number;
                } else {
                    if (hand.equals("right")){
                        sb.append("R");
                        right_idx = number;
                    } else {
                        sb.append("L");
                        left_idx = number;
                    }
                }
            }
        }
        return sb.toString();
    }

    public static int getLength(int idx, int num) {
        idx = (idx == 0) ? 11 : idx;
        num = (num == 0) ? 11 : num;

        int x = (idx - 1) / 3;
        int y = (idx - 1) % 3;
        int numX = num / 3;
        int numY = 1;

        return Math.abs(x-numX) + Math.abs(y-numY);
    }
}
dfdfdfd