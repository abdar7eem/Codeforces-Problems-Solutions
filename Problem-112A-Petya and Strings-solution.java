import java.util.Scanner;
 
public class PyteaAndStrings {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str1 = input.next();
        String str2 = input.next();
 
        if(str1.length()==str2.length()){
            if(str1.compareToIgnoreCase(str2)>0){
                System.out.println(1);
            }
            else if(str1.compareToIgnoreCase(str2)<0){
                System.out.println(-1);
            }
            else{
                System.out.println(0);
            }
        }
    }
}
