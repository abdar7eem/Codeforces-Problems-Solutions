import java.util.Scanner;
 
public class WordCapitalization{
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String str=input.next();
        String newStr=str.substring(0,1).toUpperCase()+str.substring(1);        
        System.out.println(newStr);
    }
}
