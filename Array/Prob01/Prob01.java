public class Prob01 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4};
        int[] res = new int[arr.length];

        int index = 0;
        for (int i = arr.length - 1; i >= 0; i--)
            res[index++] = arr[i];

        for (int i = 0; i < res.length; i++)
            System.out.print(res[i] + "\t");
    }
}
