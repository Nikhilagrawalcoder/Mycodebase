import java.util.Scanner;

public class matix {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        String s="";
        reach(s, n-1, m-1, 0, 0);
    }
    public static void reach(String s, int n, int m, int x,int y){
        if(x==n && y==m){
            System.out.println(s);
            return ;
        }
        if(x>n || y>m){
            return ;
        }
        reach(s+'H',n,m,x+1,y);
        reach(s+'V',n,m,x,y+1);
    }
}
