import java.util.Scanner;

public class Main {
    private static Scanner reader = new Scanner(System.in);
    private static char[] switcher = {'<', '>'};

    public static void main(String[] args) {
        int n = reader.nextInt(), t = reader.nextInt(), j = 0;
        String in = reader.next();
        if (t % 4 == 0)
            System.out.print(in);
        else
            for (int i = 0; i < n; i++)
                if (in.charAt(i) == '<' || in.charAt(i) == '>')
                    if (t % 2 == 0)
                        if (in.charAt(i) == '<')
                            System.out.print('>');
                        else
                            System.out.print('<');
                    else
                        System.out.print('|');

                else if (in.charAt(i) == '|')
                    if (t % 2 == 0)
                        System.out.print('|');
                    else
                        System.out.print(switcher[(j++) % 2]);
    }
}