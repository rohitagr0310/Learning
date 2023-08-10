package java.generic_classes;

public class genericClassArray {

  public static <T> void printArray(T[] input) {
    for (T t : input) {
      System.out.printf("%s", t);
    }
  }

  public static void main(String args[]) {
    String[] A = { "5", "4", "3", "2", "1" };
    printArray(A);
  }
}
