package Section1_basic;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class restore_alphabet {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String input = br.readLine();
		String s = input.replaceAll(" ", "");
		String s1 = s.toLowerCase();
		System.out.println("s1 = " + s1);
	}
}
