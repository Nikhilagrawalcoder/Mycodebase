public class stringcom {
    public static void main(String[] args) {
        String s1="raj";
        String s2="rajesh";
        System.out.println(compare(s1,s2));
    }
    public static int compare(String s1,String s2){
       
 
       
        for(int i=0;i<Math.min(s1.length(),s2.length());i++){
if(s1.charAt(i)!=s2.charAt(i)){
      return (int)(s1.charAt(i))-(int)(s2.charAt(i));
}
        }

    return s1.length()-s2.length();


        }
    }

