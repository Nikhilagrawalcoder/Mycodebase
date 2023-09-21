import java.util.Scanner;

public class linear_search{
    /**
     * @param args
     */
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            arr[i]=x;
        }
        int target=sc.nextInt();
        int postition=-1;
        int position;
        for(int i=0;i<n;i++){
if(arr[i]==target){
    position=i;
    break;
}
        }
        System.out.println(position);
    }
}