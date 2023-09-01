import java.util.Scanner;

public class pattern6 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=0;
while(i<n){
    int space=2*i;
    while(space>0){
        System.out.print(" ");
        space--;
    }
    int star=n-i;
    while(star>0){
        System.out.print("*");
        star--;
    }
    System.out.println();
    i++;

}
sc.close();
    }
}
