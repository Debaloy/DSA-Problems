public class Prob2 {
    public static void main(String[] args) {
        int[] arr = {10, -9, 20, 11, 100, 210, 49, -3};
        int max = arr[0];
        int min = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }

        System.out.println("Max: " + max + "\nMin: " + min);
    }
}
