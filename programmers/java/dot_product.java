public class dot_product {
    
	public static int solution(int[] a, int[] b) {
		return IntStream.range(0, a.length).map(i -> a[i] * b[i]).sum();
	}
}
