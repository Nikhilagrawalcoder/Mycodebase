import java.util.Scanner;

public class power {

public static int pow(int a,int n){
    if(n==0)
    return 1;
    // return a*pow(a,n-1);
    int ans=pow(a,n/2);
    ans=ans*ans;
    if(n%2!=0)
    ans=ans*a;
    return ans;
}




    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int n=sc.nextInt();
        System.out.print(pow(a,n));
    }
}
