import java.util.Scanner;

public class linearsearch {



    public static int linearsearch(int a[],int n,int k){
        if(n==-1)
        return n;
        if(a[n]==k)
        return n;
        return linearsearch(a, n-1, k);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int k=sc.nextInt();
        System.out.println(linearsearch(a, n-1, k));

    }
}
