public class substring {
    public static void main(String[] args) {
    String s="Hello";
    cal(s,0,5);
    }
    public static void cal(String s,int a,int b){
        for(int i=a;i<b;i++){
            String d=""+s.charAt(i);
            System.out.println(d);
            for(int j=i+1;j<b;j++){
                d=d+s.charAt(j);
                System.out.println(d);

            }
        }
    }
}
