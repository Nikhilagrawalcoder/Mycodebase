import java.util.Scanner;

public class pattern11 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=1;
int space=(n-1)*2;

while(n-->0){
    
    int k=space;
    while(k>0){
    System.out.print(" ");
    k--;
    }
    k=i;
    while(k>0){
        System.out.print("* ");
        
        
        k--;
    }
System.out.println();
i+=1;
space-=2;



}
sc.close();
    }
}