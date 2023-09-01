import java.util.Scanner;

public class pattern19 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int space=-1;
int star=n/2+1;
int row=1;
while(row<=n){
    
    int i=star;
    
    while(i>0){
        System.out.print("*");
        i--;
    }
    int k=space;
    while(k>0){
        System.out.print(" ");
        k--;
    }
    int j;
    if(row==1 || row==n)
     j=star-1;
    else
     j=star;
    while(j>0){
        System.out.print("*");
        j--;
    }

    if(row<=n/2){
        space+=2;
        star--;

    }
    else{
        space-=2;
        star++;
    }
    row++;
System.out.println();
}
sc.close();
    }
}