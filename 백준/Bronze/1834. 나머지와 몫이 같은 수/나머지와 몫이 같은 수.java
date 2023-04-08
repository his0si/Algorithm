import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		long N=scanner.nextInt(); //2,000,000까지 입력 받아서 int형 쓰면 오버플로우 남!!
		long sum=0; 
		
		for(int i=1;i<=N-1;i++) {
			sum = sum + (N * i) + i; 
			/*N = 1 일때 x
			N = 2 일때 3
			N = 3 일때 4, 8
			N = 4 일때 5, 10, 15
				...
			나머지와 몫이 같은 자연수 갯수 N-1개
			나머지와 몫이 같은 자연수는 배수관계*/
		}
		System.out.print(sum);
		scanner.close();
	}
}
