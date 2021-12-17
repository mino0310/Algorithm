package Section1_basic;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class right_bracket {

    	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();
		String[] array = s.split("");

		Stack<String> stack = new Stack<>();

		for (String s1 : array) {
			if (s1.equals("(")) {
				stack.push(s1);
			} else if (s1.equals(")")) {
				if (!stack.isEmpty() && stack.peek().equals("(")) {
					stack.pop();
				}
			}
		}

		if (stack.isEmpty()) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
}
