import java.util.*;

public class 1971D {
    
    static void solve() {
        Scanner scanner = new Scanner(System.in);
        String k = scanner.next();
        String e = k;
        char[] eArray = e.toCharArray();
        Arrays.sort(eArray);
        e = new String(eArray);
        boolean flag = true;
        for (int i = 0; i < k.length(); i++) {
            if (e.charAt(i) != k.charAt(i)) {
                flag = false;
                break;
            }
        }
        if (flag) {
            System.out.println(1);
            return;
        }
        if (k.charAt(k.length() - 1) == '1') {
            k += '0';
        } else {
            k += '1';
        }
        int counter = -1;
        for (int i = 0; i < k.length() - 1; i++) {
            if (k.charAt(i) != k.charAt(i + 1)) {
                counter++;
            }
        }
        if (counter == 1) {
            System.out.println(2);
        } else {
            System.out.println(counter);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long t = scanner.nextLong();
        while (t-- > 0) {
            solve();
        }
    }
}