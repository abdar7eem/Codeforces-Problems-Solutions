import java.util.Scanner;
 
public class Hulk {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = "";
        int n = input.nextInt();
        if (n >= 1 && n <= 100) {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    str += "I hate ";
                } else {
                    str += "I love ";
                }
                if (i != n - 1) {
                    str += "that ";
                }
            }
        }
        str += "it";
        System.out.println(str);
    }
}
