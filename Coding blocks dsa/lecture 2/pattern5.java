import java.util.Scanner;

public class pattern5 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=0;
while(i<n){
    int j=n-i;
    int k=0;
    while(k<=i){
System.out.print(" ");
k++;
    }
    while(j>0){
        System.out.print("*");
        j--;
    }
    System.out.println();
    i++;
}
sc.close();
    }
}
