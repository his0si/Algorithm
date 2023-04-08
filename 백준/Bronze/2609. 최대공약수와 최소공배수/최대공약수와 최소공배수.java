import java.util.Scanner;

public class Main {
	
	public static int gcd(int a, int b){
	    int tmp, n;

	    if(a<b){ //a에 큰 값을 위치시키기 위한 조건문
	        tmp = a;
	        a = b;
	        b = tmp;
	    }
	    
	//유클리드 알고리즘 부분
	    while(b!=0){ //b가 0이 될때까지(a%b), 반복문을 돌게되고, b가 0인 순간의 a를 GCD로 판단하고 리턴
	        n = a%b;
	        a = b;
	        b = n;
	    }
	    return a;
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		
		int a = scanner.nextInt();
		int b = scanner.nextInt();
 
		int d = gcd(a, b);	
		
		System.out.println(d); 
		System.out.println(a * b / d); //최소 공배수
		
		scanner.close();
	}
}