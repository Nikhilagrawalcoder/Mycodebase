public class partition{
    public static void main(String[] args) {
        String ques="nitin";
        Partition(ques,"");
    }
    public static void Partition(String ques,String ans){
        if(ques.length()==0)
        {
            System.out.println(ans);
            return;
        }

        for(int i=1;i<=ques.length();i++){
            String s=ques.substring(0,i);
            if(palindrome(s))
            Partition(ques.substring(i),ans+s+"|");
        }
    }
    public static boolean palindrome(String ans){
        int low=0;
        int high=ans.length()-1;
        while(low<=high){
            if(ans.charAt(low)==ans.charAt(high))
            {
                low++;
                high--;
            }
            else
            return false;
        }
        return true;
    }
}