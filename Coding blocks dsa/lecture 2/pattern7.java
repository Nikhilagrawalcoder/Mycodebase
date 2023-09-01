import java.util.Scanner;

public class pattern7 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=0;
while(i<n){
    if(i==0 || i==n-1){
        int j=0;
        while(j<n){
            System.out.print("*");
            j++;
        }
    }
    else{
        System.out.print("*");
        int space=n-2;
        while(space>0){
            System.out.print(" ");
            space--;
        }
        System.out.print("*");
    }
    System.out.println();
    i++;
}
sc.close();
    }
}
