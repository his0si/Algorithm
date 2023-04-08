import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

		int t = scanner.nextInt();
		for(int i = 0; i < t; i++) {
			int n = scanner.nextInt();
			int player1 = 0;
			int player2 = 0;//테스트 케이스 우승 횟수
			
			for(int j = 0; j < n; j++) {
				String a = scanner.next();//R P S 종류 입력 받기
				String b = scanner.next();
            
				if((a.equals("R")&&b.equals("S")) || (a.equals("S")&&b.equals("P")) || (a.equals("P")&&b.equals("R"))) {
					player1 = player1 + 1;
				}
				if((a.equals("S")&&b.equals("R")) || (a.equals("P")&&b.equals("S")) || (a.equals("R")&&b.equals("P"))) {
					player2 = player2 + 1;
				}
			}
			if (player1 > player2) {
				System.out.println("Player 1");
			}
			else if (player1 < player2) {
				System.out.println("Player 2");
			}
			else {
				System.out.println("TIE");
			}
		}scanner.close();
    }
}