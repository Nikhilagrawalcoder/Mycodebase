public class prime{
     public static void main(String[] args) {
        prime_sieve(89);
    }
    public static void prime_sieve(int n){
        boolean[]prime=new boolean[n+1];
        prime[0]=true;
        prime[1]=true;
        int c=0;
        for(int i=2;i*i<=prime.length;i++){
            if(prime[i]==false){
                for(int j=2;i*j<prime.length;j++){
                    prime[i*j]=true;
                }
            }
        }
        for(int i=0;i<prime.length;i++){
            if(prime[i]==false)
            c++;
        }
        System.out.println(c);
    }
}