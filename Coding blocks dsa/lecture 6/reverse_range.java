import java.util.Scanner;

public class reverse_range {
    public static void main(String []args){
        int arr[]={2,4,5,1,7,9,8};
        Scanner sc=new Scanner(System.in);
        int low=sc.nextInt();
        int high=sc.nextInt();
        Reverse(arr,low,high);
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    public static void Reverse(int arr[],int low,int high){
       while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
       }
            
        }
    }

