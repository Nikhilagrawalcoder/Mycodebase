public class dice{

    public static void main(String[] args) {
        int n=4;

       print(n,0,"",4);
    }
    public static int print(int n,int curr,String ans,int m){
        if(curr==n)
    {
        System.out.println(ans);
        return 1;
    }
    if(curr>n)
    return ;
    for(int i=1;i<=m;i++){
    print(n,curr+i,ans+i,m);
    }

    }
}