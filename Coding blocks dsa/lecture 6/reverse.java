public class reverse {
    public static void main(String []args){
        int arr[]={2,4,5,1,7,9,8};
        Reverse(arr);
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    public static void Reverse(int arr[]){
        for(int i=0;i<arr.length/2;i++){
            int temp=arr[i];
            arr[i]=arr[arr.length-i-1];
            arr[arr.length-i-1]=temp;
            
        }
    }
}

