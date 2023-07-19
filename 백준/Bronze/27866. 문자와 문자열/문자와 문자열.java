import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		//입력된 문자열을 한 글자씩 분리하여 문자열 배열에 저장
		String[] wordArr = scanner.next().split("");
        int b = scanner.nextInt();

        System.out.println(wordArr[b-1]);
        scanner.close();
	}
}
