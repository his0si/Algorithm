import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int N=scanner.nextInt();
		int answer=0;
		
		for(int i=1;i<=9;i++) {
			answer=N*i;
			System.out.println(N+" * "+i+" = "+answer);
		}scanner.close();
	}
}
