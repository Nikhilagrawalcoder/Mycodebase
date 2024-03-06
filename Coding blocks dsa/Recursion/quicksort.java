public class quicksort {
    public static void main(String[] args) {
        
    }
    public static void Sort(int []a,int si,int ei){
        if(si>=ei){
            return;
        }
        int idx=Partition(a,si,ei);
        Sort(a,si,idx-1);
        Sort(a,idx+1,ei);
    }
    public static int Partition(int []a,int si,int ei){
        int item=a[ei];
        int idx=si;
        for(int i=si;i<ei;i++){
            if(a[i]<item){
                int t=a[i];
                a[i]=a[idx];
                a[idx]=t;
                idx++;
            }
        }
        int t=a[ei];
        a[ei]=a[idx];
        a[idx]=t;
        return idx;
    }
}
