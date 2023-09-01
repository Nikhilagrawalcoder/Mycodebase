import java.util.Scanner;

public class pattern3 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=n;
while(i>0){
    int j=i;
    while(j>0){
        System.out.print("*");
        j--;
    }
    System.out.println();
    i--;
}
sc.close();
    }
}
