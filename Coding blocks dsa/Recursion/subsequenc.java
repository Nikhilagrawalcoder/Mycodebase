public class subsequenc {
    
    public static void main(String[] args) {
        String s="abcd";
System.out.println(sub(s,"",0));
    }
    public static int sub(String s,String ans,int c){
if(s.length()==0)
{
    System.out.println(ans);
    
    return 1;
}
        char ch=s.charAt(0);
     int a=   sub(s.substring(1),ans,0);
       int b= sub(s.substring(1),ans+ch,0);
       return a+b;
    }
}
