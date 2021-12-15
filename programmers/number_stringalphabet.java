class Solution {
    public int solution(String s) {
		String res = s.replaceAll("zero", "0");
		res = res.replaceAll("one", "1");
		res = res.replaceAll("two", "2");
		res = res.replaceAll("three", "3");
		res = res.replaceAll("four", "4");
		res = res.replaceAll("five", "5");
		res = res.replaceAll("six", "6");
		res = res.replaceAll("seven", "7");
		res = res.replaceAll("eight", "8");
		res = res.replaceAll("nine", "9");
        
        return Integer.parseInt(res);
    }
}public class number_string&alphabet {
    
}
