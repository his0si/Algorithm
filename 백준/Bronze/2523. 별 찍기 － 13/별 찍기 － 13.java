import java.util.Scanner;

public class Main {
	
	public static void starprint(int N) { //메인 메소드에서 매개 변수 N을 받아 옴
		//객체의 상태와 관계없이 독립적인 기능을 구현해야 할 때는 정적 메소드를 사용
		
		for(int i=1;i<=N;i++) {
			for(int j=0;j<i;j++) {
				System.out.print("*");
			}
			System.out.println("");
		}
		
        for(int i=2*(N-1);i>=(N-1);i--) {
        	for(int j=0;j<=i-N;j++) {
        		System.out.print("*");
        	}
        	System.out.println("");
		}
	}

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		
		starprint(N);
		scanner.close();
	}
}