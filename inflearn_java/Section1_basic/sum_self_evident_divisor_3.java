package Section1_basic;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;
import java.util.stream.IntStream;

public class sum_self_evident_divisor_3 {
    
    public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int a = Integer.valueOf(st.nextToken());
		Queue<Integer> queue = new LinkedList<>();
		int sum = IntStream.range(1, a).filter(i -> a % i == 0).sum();
		for (int i = 1; i < a; i++)
			if (a % i == 0) 
				queue.add(i);
		int size = queue.size();
		IntStream.range(0, size - 1).mapToObj(i -> queue.poll() + " + ").forEach(System.out::print);
		System.out.print(queue.poll());
		System.out.print(" = " + sum);
	}
}
