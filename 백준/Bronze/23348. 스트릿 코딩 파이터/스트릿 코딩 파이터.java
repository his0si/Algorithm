import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();
        int C = scanner.nextInt();
        int N = scanner.nextInt();
        int max_score = 0;

        for (int i = 0; i < N; i++) {
            int score = 0;
            for (int j = 0; j < 3; j++) {
                score = score + scanner.nextInt() * A;
                score = score + scanner.nextInt() * B;
                score = score + scanner.nextInt() * C;
            }
            if (max_score < score) {
                max_score = score;
            }
        }

        System.out.println(max_score);
    }
}
