import java.util.Scanner;
 
public class HelpFulMath {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String str=input.next();
        String tokens[]=str.split("\\+");
        for(int i=0;i<tokens.length;i++){
            for(int j=0;j<tokens.length;j++){
                if(Integer.parseInt(tokens[i])<Integer.parseInt(tokens[j])){
                    int temp=Integer.parseInt(tokens[i]);
                    tokens[i]=tokens[j];
                    tokens[j]=String.valueOf(temp);
                }
            }
        }
        System.out.print(tokens[0]);
        for(int i=1;i<tokens.length;i++){
            System.out.print("+"+tokens[i]);
        }
 
    }
}
