public class stringed{
    public  static void main(String[] args) {
        
String str1="Hello";

String str3=new String("Hello");
System.out.println(equals(str1, str3));

    }
public static boolean equals(String s1,String s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    boolean flag=true;
    for(int i=0;i<s1.length();i++){
        if(s1.charAt(i)!=s2.charAt(i)){
flag=false;
break;
        }
    }
    return flag;
    
}

}
