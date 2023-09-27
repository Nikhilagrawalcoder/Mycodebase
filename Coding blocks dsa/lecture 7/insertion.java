public class insertion {
    public static void main(String args[]){
        int arr[]={2,4,5,1,7,3};
        insert
    }
    public static void Insert(int arr[],int i){
        int j=i-1;
        int item=arr[i];
        while(j>=0&&arr[j]>item){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=item;
    }
}
