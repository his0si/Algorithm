import java.util.Scanner;

public class Main {
	
     public static boolean isPrime(int num){ //소수 판별 메소드
         if(num == 1)
             return false;
         for (int i = 2; i <= Math.sqrt(num); i++) {
             if (num % i == 0) {
                 return false;
             }
         }
         return true;
     }

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int M = scanner.nextInt();
        int N = scanner.nextInt();
        int sum = 0;
        int min = Integer.MAX_VALUE; //Integer.MAX_VALUE는 int 타입이 가질 수 있는 최대값
        //자바에서 기본적으로 제공되는 상수, 추가적인 라이브러리를 필요로하지 않음
		
		for(int i = M; i <= N; i++) {
			if(isPrime(i)) {
				sum = sum + i;
				if(i < min) {
					min = i;
				}
			}
		}
		
		if(sum == 0) {
			System.out.println("-1");
		} else {
			System.out.println(sum);
			System.out.println(min);
		}
	}
}

