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
    private static Set<Integer> vals = new HashSet<>();
    private static List<String> outputs = new ArrayList<>();

    public static void generate(Object[] input, int startindex) {
        if (startindex == 3)
            outputs.add(input[0] + "" + input[1] + "" + input[2] + "" + input[3]);
        else
            for (int i = startindex; i < 4; i++) {
                Object temp = input[i];
                input[i] = input[startindex];
                input[startindex] = temp;
                generate(input, startindex + 1);
                temp = input[i];
                input[i] = input[startindex];
                input[startindex] = temp;
            }
    }

    public static void main(String[] args) {
        String result;
        for (int i = 0; i < 3; i++) {
            System.out.println(4 * i + "" + (4 * i + 1) + "" + (4 * i + 2) % 10 + "" + (4 * i + 3) % 10);
            result = reader.next();
            if (result.compareTo("GGGG") == 0)
                return;
            for (int j = 0; j < 4; j++)
                if (result.charAt(j) != 'R') vals.add((4 * i + j) % 10);
        }
        generate(vals.toArray(), 0);
        for (String i : outputs) {
            System.out.println(i);
            if ((reader.next()).compareTo("GGGG") == 0)
                break;
        }
    }
}