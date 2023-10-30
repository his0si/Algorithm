import java.util.Scanner;

public class Main {
   
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int pH = 0;
      int pG = 0;
      
      String input = sc.nextLine();
      int num = input.length();
      for(int i = 0; i<num; i++) {
         char x = input.charAt(i);
         if(x=='A') {
            pH++;
            pG++;
         }
         else if(x=='H'||x=='P'||x=='Y') {
            pH++;
         }
         else if(x=='S'||x=='D') {
            pG++;
         }
      }
      
      if(pH==0&&pG==0) {
         System.out.println("50.00");
         return;
      }
      
      double h = (double)(pH*100)/(pH+pG);
      System.out.printf("%.2f", h);
      sc.close();

   }

}