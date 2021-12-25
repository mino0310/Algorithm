import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class sum_digit_large {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		int totalCnt = 0, maxNum = 0, numberSize = 1, digitSum = 9;
		while (maxNum + digitSum < n) {
			totalCnt += numberSize * digitSum;
			maxNum += digitSum;
			numberSize++;
			digitSum *= 10;
		}
		totalCnt += numberSize * (n - maxNum);
		System.out.println(totalCnt);
	}
}
