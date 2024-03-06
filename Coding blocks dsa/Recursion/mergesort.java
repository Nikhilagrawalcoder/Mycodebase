public class mergesort{
    public static void main(String[] args) {
        
    }
    public static int[] sort(int []arr,int si,int ei){
if(si==ei){
    int[]bs = new int[1];
    bs[0]=arr[si];
    return bs;
}
int mid=(si+ei)/2;
int []f = sort(arr, si, mid);
int []s=sort(arr, mid+1, ei);
return Merge(f,s);
    }
    public static int[] Merge(int a1[],int a2[]) {
		int n=a1.length;
		int m=a2.length;
		int a[]=new int[n+m];
		int i=0,j=0,k=0;
		while(i<n && j<m) {
			if(a1[i]<a2[j]) {
				a[k++]=a1[i];
				i++;
			}
			else
			{
				a[k++]=a2[j];
				j++;
			}
		}
		while(i<n) {
			a[k++]=a1[i];
			i++;
		}
		while(j<m) {
			a[k++]=a2[j];
			j++;
		}
		return a;
	}
}