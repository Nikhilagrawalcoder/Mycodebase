public class perm {
    public static void main(String[] args) {
        String s="ABC";
        per(s,"");

    }
    public static void per(String s,String ans){
if(s.length()==0)
{
    System.out.println(ans);
    return;
}
for(int i=0;i<s.length();i++){
    //ans=ans+s.charAt(i);
    char ch=s.charAt(i);
    boolean flag=true;
    for(int j=i+1;j<s.length();j++){
        if(s.charAt(j)==ch)
    {
        flag=false;
        break;
    }
    }
    if(flag){
    String s1=s.substring(0, i);
    String s2=s.substring(i+1);
    per(s1+s2,ans+s.charAt(i));
}

}

    }
}
