import java.util.*;

public class temp {
    static class Cars {
        int price;
        int speed;
        String color;

        public Cars() {
        }

        public Cars(int price, int speed, String color) {
            this.price = price;
            this.speed = speed;
            this.color = color;
        }

        public String toString() {
            return "Price: " + price + ", Speed: " + speed + ", Color: " + color;
        }

        public static <T extends Comparable<T>> void Sort(T[] arr) {
            for (int turn = 1; turn < arr.length(); turn++) {
                for (int i = 0; i < arr.length() - turn; i++) {
                    if (arr[i].compareTo(arr[i + 1]) > 0) {
                        T temp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = temp;
                    }
                }
            }
        }
    }

    public static void Display(Cars[] arr) {
        for (int i = 0; i < ar.length; i++) {
            System.out.println(ar[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args){
            Cars[] arr=new Cars[5];
            arr[0]=new Cars(15000,200,"red");
            arr[1]=new Cars(20000,250,"blue");
            arr[2]=new Cars(1000,200,"green");
            arr[3]=new Cars(1000,300,"yellow");
            arr[4]=new Cars(100,300,"green");
            Sort()
        }

}