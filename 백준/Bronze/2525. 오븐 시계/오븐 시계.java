import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int hour = scanner.nextInt();
        int minute1 = scanner.nextInt();
        int minute2 = scanner.nextInt();
        
        // 오븐구이가 끝나는 시각 계산
        minute1 = minute1 + minute2;  // 분에 소요시간을 더함
        hour = hour + minute1 / 60;  // 60분을 넘는 분은 시간 쪽에 더함
        minute1 =  minute1 % 60;  // 위에 계산 하고 남은 나머지 분
        
        if(hour>=24) {
        	hour = hour - 24;
        }
        
        System.out.println(hour + " " + minute1);
        scanner.close();
    }
}
