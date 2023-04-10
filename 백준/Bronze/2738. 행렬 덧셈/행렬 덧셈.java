import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N=scanner.nextInt();
		int M=scanner.nextInt();
		
		int[][] arr1 = new int[N][M];
		int[][] arr2 = new int[N][M];
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				arr1[i][j] = arr1[i][j] + scanner.nextInt(); //첫번째 행렬 입력 받기
			}
		}
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				arr2[i][j] = arr2[i][j] + scanner.nextInt(); //두번째 행렬 입력 받기 
			}
		}

		for (int i = 0; i < N; i++) { 
			for (int j = 0; j < M; j++) {
				System.out.print(arr1[i][j]+arr2[i][j] + " "); //입력 받은 M*N행렬 두개 더하기
			}
			System.out.println();
			scanner.close();
		}
	}
}