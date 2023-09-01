import java.util.Scanner;

public class pattern4 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=1;
while(i<=n){
    int space=n-i;
    int star=i;
    while(space>0){
        System.out.print(" ");
        space--;
    }
    while(star>0)
    {
        System.out.print("*");
        star--;
    }
    System.out.println();
    i++;

}
sc.close();
    }
}
