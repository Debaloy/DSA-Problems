public class Prob04 {
    public static void main(String[] args) {
        Integer[] arr = { 0, 1, 0, 2, 1, 0, 2, 1, 0, 2 };
        int zeros = 0, ones = 0, twos = 0;

        for (Integer num : arr) {
            if (num == 0) zeros++;
            else if (num == 1) ones++;
            else if (num == 2) twos++;
        }

        for (int i = 0; i < arr.length; i++) {
            if (zeros != 0) {
                zeros--;
                arr[i] = 0;
            } else if (ones != 0) {
                ones--;
                arr[i] = 1;
            } else if (twos != 0) {
                twos--;
                arr[i] = 2;
            }
        }

        for (Integer num : arr) {
            System.out.print(num);
            System.out.print("\t");
        }
    }
}
