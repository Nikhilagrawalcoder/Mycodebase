import java.util.Scanner;

public class pd {
    public static void pd(int n){
        if(n==0)
        return ;
        System.out.println(n);
         pd(n-1);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        pd(n);

    }
}
