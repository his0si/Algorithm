import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		 Scanner scanner=new Scanner(System.in);
        int N=scanner.nextInt();
        int[] arr = new int[N];
        int ans=0;

        for (int i = 0; i < N; i++) {
            arr[i] = scanner.nextInt();
             }
        int v=scanner.nextInt();
        for (int i = 0; i < N; i++) {
             if(arr[i]==v){
                 ans=ans+1;
                   }
             }
            System.out.print(ans);
            scanner.close();
    }
}