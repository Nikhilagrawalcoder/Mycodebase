public class head {
 public static void main(String[] args) {
    int n=4;
    Print(n,"");
 }
 public static void Print(int n,String ans){
if(n==0){
System.out.println(ans);
return ;}
    char ch1='H';
    char ch2='T';
   //  if(ans.length()==0 || ans.charAt(ans.length()-1)!='H')   
    Print(n-1,ans+ch1);
    Print(n-1,ans+ch2);

 }
}
