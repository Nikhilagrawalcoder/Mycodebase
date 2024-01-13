import java.util.Scanner;

public class pi {
    public static void pi(int n){
        if(n==0)
        return ;
        pi(n-1);
        System.out.println(n);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        pi(n);
    }
}
