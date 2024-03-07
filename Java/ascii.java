public class ascii {

  public static void main(String[] args) {
    for (int i = 0; i < 128; i++) {
      System.err.println(i + " " + (char) i);
    }
  }
}
