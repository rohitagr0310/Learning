import java.util.Scanner;

public class armstrong {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int result = 0;

    int sum = 0;
    while (n > 0) {
      int reminder = n % 10;
      sum += (reminder * reminder * reminder);

      n = n / 10;
    }

    if (n == sum) {
      result = 1;
    }

    System.out.print(result);
  }
}
