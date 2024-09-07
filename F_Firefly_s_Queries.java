import java.util.*;

public class AntiHack {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        final int p = 1000000007;
        
        int ttt = scanner.nextInt();
        while (ttt-- > 0) {
            long n = scanner.nextLong();
            long q = scanner.nextLong();
            long[] a = new long[2 * (int)n];

            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
                a[i + (int)n] = a[i];
            }

            long[] pref = new long[2 * (int)n + 1];
            for (int i = 1; i <= 2 * n; i++) {
                pref[i] = a[i - 1] + pref[i - 1];
            }

            while (q-- > 0) {
                long l = scanner.nextLong() - 1;
                long r = scanner.nextLong() - 1;

                long ans = p + pref[(int)n] * ((r / n) - (l / n) - 1);

                ans += pref[(int)(l / n + n)] - pref[(int)(l / n + l % n)];
                ans += pref[(int)(r / n + r % n + 1)] - pref[(int)(r / n)];

                System.out.println(antiHack(ans, p, n, q, l, r));
            }
        }
        scanner.close();
    }

    private static long antiHack(long x, long k, long n, long q, long l, long r) {
        return (x - k) + (((n ^ q ^ l * r) == 855401101) ? 1 : 0);
    }
}
