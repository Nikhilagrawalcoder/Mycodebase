import java.util.Scanner;

public class pattern25 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int i=0;
int c=1;
while(i<n){
    int space1=n-i-1;
    while(space1>0)
{
    System.out.print("\t");
    space1--;
}
int star=i+1;
while(star>0){
    System.out.print(c+"\t");
    c++;
    star--;
}

int star2=i;
while(star2>0){
    System.out.print(c+"\t");
    c++;
    star2--;
}
System.out.println();
i++;
}
sc.close();
    }
}