import java.util.Scanner;

public class file4 {
    public static void main(String[] args) {
        
Scanner sc=new Scanner(System.in);
int marks=sc.nextInt();
if(marks>=95)
System.out.println("A+");
else if(marks>=85 && marks<95)
System.out.println("A");
else if(marks>=75 && marks<85)
System.out.println("B");
else
System.out.println("FAIL");
sc.close();
    }
}
