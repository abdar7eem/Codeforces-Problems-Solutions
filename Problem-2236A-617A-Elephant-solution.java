import java.util.Scanner;
public class Elephant{
    public static void main(String []args){
        Scanner input=new Scanner(System.in);
        double n=input.nextDouble();
        double steps=Math.ceil(n/5);
        System.out.println((int)steps);
    }
}
