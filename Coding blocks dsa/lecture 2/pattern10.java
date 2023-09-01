import java.util.Scanner;

public class pattern10 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=n;
while(i>0){
    int space1=n-i;
    while(space1>0)
{
    System.out.print(" ");
    space1--;
}
    int star=i;
while(star>0){
    System.out.print("*");
    star--;
}
    


int star2=i-1;
while(star2>0){
    System.out.print("*");
    star2--;
}
System.out.println();
i--;
}
sc.close();
    }
}