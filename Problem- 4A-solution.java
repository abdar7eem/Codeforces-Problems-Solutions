import java.util.Scanner;
 
public class WaterMelon {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        if (num % 2 == 0 && num > 2) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
 
}
