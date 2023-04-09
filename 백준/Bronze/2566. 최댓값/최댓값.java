import java.util.Scanner;

public class Main {

    final static int ROW = 9;
    final static int COL = 9;
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int maxRow = 0;
		int maxCol = 0;
		int max = 0;
		
		int[][] arr = new int[ROW][COL];
		
		for (int i = 0; i < ROW; i++) {
			for (int j = 0; j < COL; j++){
				arr[i][j] = scanner.nextInt();}
		}
		
		for (int i = 0; i < ROW; i++) {
			for (int j = 0; j < COL; j++) {
				if(arr[i][j] > max) {
					max = arr[i][j];
					maxRow = i;
					maxCol = j;
				}
			}
		}
		
		System.out.println(max);
		System.out.println((maxRow+1) + " " + (maxCol+1));
	}
}