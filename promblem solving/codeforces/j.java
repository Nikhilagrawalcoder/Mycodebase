import java.util.*;
public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int spaceship=n+1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(j+"\t");
            }
            for(int l=1;l<=spaceship;l++){
                System.out.print("\t");
            }
            int u=i;
            if(i==n){
u=i-1;
            }
            for(int k=u;k>0;k--){
                System.out.print(k+"\t");
            }
            spaceship=spaceship-2;
            System.out.println();
        }

    }
}