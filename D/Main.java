import java.io.*;
import java.util.*;

public class Main {

    private static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        public FastScanner() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }
    }

    private static FastScanner reader = new FastScanner();
    public static void main(String[] args) {
        Map<Character, Integer> chars = new HashMap<Character, Integer>();
        int n = reader.nextInt();
        for (int j = 0; j < n; j++) {
            String p = reader.next();
            for (int i = 0, range = p.length(); i < range; i++)
                if (chars.get(p.charAt(i)) == null)
                    chars.put(p.charAt(i), 1);
                else
                    chars.put(p.charAt(i), chars.get(p.charAt(i)) + 1);
            System.out.println(Collections.min(chars.values()) + "-Anagram");
            chars.clear();
        }
    }
}