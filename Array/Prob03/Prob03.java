import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;

public class Prob03 {
    public static void main(String[] args) {
        System.out.println("Enter n: ");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        Integer[] arr = new Integer[n];

        System.out.println("Enter " + n + " elements: ");
        for (int i = 0; i < n; i++)
            arr[i] = scanner.nextInt();

            
        Arrays.sort(arr, Collections.reverseOrder());
            
        System.out.println("Type the n-th number: ");
        n = scanner.nextInt();

        scanner.close();

        System.out.println("Max n-th: " + arr[n - 1]);
        System.out.println("Min n-th: " + arr[arr.length - n]);
    }
}