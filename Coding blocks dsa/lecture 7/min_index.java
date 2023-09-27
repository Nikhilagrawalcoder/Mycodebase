public class min_index {
    public static void main(String args[]){
       int arr[]={2,4,5,1,7,3};
      for(int i=0;i<arr.length;i++){
        int m= min_inde(arr,i);
int temp=arr[i];
arr[i]=arr[m];
arr[m]=temp;
      }
      for(int i=0;i<arr.length;i++)
      {
        System.out.println(arr[i]);
      }
    }
    public static int min_inde(int [] arr,int i){
        int mini=i;
        for(int j=i+1;j<arr.length;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        return mini;
    }
}
