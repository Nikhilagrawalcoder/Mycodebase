public class nborard {
    public static void main(String[] args) {
        int n=4;
        boolean[] board=new boolean[n];
        int tq=2;
        Perm(board,tq,0,"",0);
    }
    public static void Perm(boolean[]board,int tq,int q,String s,int k){
        if(tq==q){
            System.out.println(s);
        
            return ;
        }

        for(int i=k;i<board.length;i++){
            if(board[i]==false )
            {
                board[i]=true;
                Perm(board,tq,q+1,s+"b"+i+"q"+q,i+1);
                board[i]=false;
            }
        }
    }
}
