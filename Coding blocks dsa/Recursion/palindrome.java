public class palindrome{
    public static void main(String[] args) {
        palindrom("naan");
    }
    public static void palindrom(String s){
        int odd=0;
        for(int axis=0;axis<s.length();axis++){
            int orbit=0;
            while(axis-orbit>=0 && axis+orbit<s.length()){
                if(s.charAt(axis-orbit)!=s.charAt(axis+orbit))
                break;
                odd++;
                orbit++;

            }
            
        }
        int even=0;
        for(int axis=0;axis<s.length();axis++){
            double orbit=0.5;
            while(axis-orbit>=0 && axis+orbit<s.length()){
                if(s.charAt((int)(axis-orbit))!=s.charAt((int)(axis+orbit)))
                break;
                even++;
                orbit++;

            }
            
        }
        System.out.println(odd+even);
    }
}