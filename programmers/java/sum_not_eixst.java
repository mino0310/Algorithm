import java.util.stream.IntStream;

class Solution {
    public int solution(int[] numbers) {


        int sum = IntStream.of(numbers).sum();
        return 45 - sum;
    }
}
