import java.util.*;
public class max_element{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            arr[i]=x;
        }
       int max=arr[0];
        for(int i=1;i<n;i++){
if(max<arr[i]){
    max=arr[i];
}
        }
        System.out.println(max);
    }
}