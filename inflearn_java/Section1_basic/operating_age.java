package Section1_basic;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class operating_age {
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine(), "-");

		String year = st.nextToken();
		String sex = st.nextToken();

		Integer age_num = Integer.valueOf(year.substring(0, 2));
		Integer sex_num = Integer.valueOf(sex.substring(0, 1));

		int age = 120 -age_num;
		if(sex_num == 1 || sex_num == 3) sex = "M";
		else sex = "W";

		System.out.println(age + " " + sex);
	}
}
