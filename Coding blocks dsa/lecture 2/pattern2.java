import java.util.Scanner;

public class pattern2 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=1;
while(i<=n){
    int j=0;
    while(j<i){
    System.out.print("*");
    j++;
    }
    System.out.println();
    i++;
}
sc.close();
    }
}
