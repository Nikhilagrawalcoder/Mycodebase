public class coin_perm {
    public static void main(String[] args) {
        int coin[]={1,3,5};
        int amount=6;
        coin_changes(coin,amount,"",0);
    }
    public static void coin_changes(int []coin,int amount,String ans,int ind){
if(amount==0)
    {
        System.out.println(ans);
        return ;
    }
        for(int i=ind;i<coin.length;i++){
           if(amount>=coin[i]){
            coin_changes(coin,amount-coin[i],ans+coin[i],i);
           }
        }
    }
}
