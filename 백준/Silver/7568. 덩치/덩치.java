import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N = scanner.nextInt();
		int[][] arr = new int[N][2]; //입력값
		int rank[] = new int[N]; 
		int count = 1;
		
		for (int i=0;i<N;i++) {
			for (int j=0;j<2;j++) {
				arr[i][j] = arr[i][j] + scanner.nextInt();
				//arr[N][2]로 쓰지 않도록 주의! 반복분이니까 변수로 지정해서 for문 돌아야 함!
			}
		}

		for (int i = 0; i < N; i++) { //등수 주인공
            for (int j = 0; j < N; j++) { //비교군
                if(i == j) continue; //본인과 비교X
 
                if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
                	count = count + 1; //나보다 덩치가 크면 +1
                }
            }
            rank[i] = count; //값 저장
            count = 1; //다음 사람을 위한 count초기화
        }
 
        for (int i = 0; i < N; i++) {
            System.out.print(rank[i] + " "); //결과출력
            scanner.close();
        }
	}
}