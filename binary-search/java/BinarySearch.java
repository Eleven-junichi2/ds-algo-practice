import java.util.Arrays; // デバッグ出力用

public class BinarySearch {
    public static int run(int[] s, int x) {
        int left = 0;
        int right = s.length-1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (s[mid] == x) return mid;
            else if (x < s[mid]) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] s = {11,13,19,20,22,26,32,37,40,45};
        int[] x_patterns = {37, 15};
        System.out.println("s="+Arrays.toString(s));
        for (int x : x_patterns) {
            System.out.printf("x=%s, result=%s\n", x, run(s, x));
        }
    }
}
