import java.util.Scanner;
 
public class AntonandDanik{
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        String str=input.next();
        int A_count=0;
        int D_count=0;
        for(int i=0;i<n;i++){
            if(str.charAt(i)=='A'){
                A_count++;
            }
            if(str.charAt(i)=='D'){
                D_count++;
            }
        }
 
        if(A_count>D_count){
            System.out.println("Anton");
        }
        else if(D_count>A_count){
            System.out.println("Danik");
        }
        else{
            System.out.println("Friendship");
        }
    }
}
