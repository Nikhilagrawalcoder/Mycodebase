import java.util.Scanner;

public class pattern8 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=0;
while(i<n){
    int space1=n-i-1;
    while(space1>0)
{
    System.out.print(" ");
    space1--;
}
int star=i+1;
while(star>0){
    System.out.print("*");
    star--;
}

int star2=i;
while(star2>0){
    System.out.print("*");
    star2--;
}
System.out.println();
i++;
}
sc.close();
    }
}
