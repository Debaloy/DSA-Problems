public class Prob05 {

    static int[] arr = { 12, 3, -2, 9, -5, -3, 7 };

    public static void swap(int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
    public static void main(String[] args) {
        int len = arr.length;

        int swapP = 0, finderP = 0;

        for (int i = 0; i < len; i++) {
            if (arr[i] >= 0) finderP++;
            else {
                for (int j = i; j > swapP; j--)
                    swap(j, j-1);
                swapP++;
            }
        }

        for (int element : arr)
            System.out.println(element);
    }
}