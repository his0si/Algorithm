import java.util.ArrayList; //리스트(List)
import java.util.List; //배열(ArrayList)
import java.util.Collections; //sort 메소드를 제공하는 유틸리티 클래스 
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		List<Integer> list = new ArrayList<Integer>(); //int형 리스트 생성

		while (true) {
			list.clear();
			int n = scanner.nextInt();
			int sum = 0;

			if (n == -1) {
				break;
			}
			for (int i = 1; i <= Math.sqrt(n); i++) { //약수 구하기
				if (n % i == 0) {
					list.add(i);
					list.add(n / i);
					sum = sum + i + n / i;
				}
			}
			sum = sum - n;
			
			if (sum == n) {
				System.out.print(n + " = 1");
				Collections.sort(list);//오름차순으로 리스트 정렬
				for (int i = 1; i < list.size()-1; i++) {
					System.out.print(" + " + list.get(i));
				}
				System.out.println();
			} else {
				System.out.println(n + " is NOT perfect.");
			}
		}
	}
}