import java.util.Scanner;
 
public class Translation{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str1 = input.next();
        String str2 = input.next();
        boolean state = true;
 
        if (str1.length() != str2.length()) {
            state = false;
        } else {
            int i = 0;
            int j = str2.length() - 1;
            while (j >= 0 && i < str2.length()) {
                if (str1.charAt(j) != str2.charAt(i)) {
                    state = false;
                    break;
                }
                j--;
                i++;
            }
        }
 
        if (state) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
