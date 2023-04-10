//애초에 겹치는 넓이를 따로 처리할 필요없음
import java.util.Scanner;

public class Main {
	
	final static int ROW = 100;
    final static int COL = 100;

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int N=scanner.nextInt();//색종이 수
		int X=0,Y=0;
		int area=0;
		
		int[][] arr = new int[ROW][COL]; //도화지

		for (int x = 0; x < N; x++) { //색종이를 붙힌 위치 입력
			X=scanner.nextInt();
			Y=scanner.nextInt();
			
			for(int a = X;a < X+10; a++) {
				for(int b = Y;b < Y + 10; b++) {
					if(arr[a][b]==1) { //이미 붙혀져 있으면 그냥 통과
						continue;
					}else {
						arr[a][b]=1; //안 붙여져 있으면 넓이에 추가
						area++;
					}
				}
			}
		}
		System.out.println(area);
		scanner.close();
	}
}
