public class a3dArray {

  public static void main(String args[]) {
    int array[][][] = new int[8][8][8];

    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        for (int k = 0; k < 8; k++) {
          array[i][j][k] = i * j * k;
        }
      }
    }

    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        for (int k = 0; k < 8; k++) {
          System.out.print(array[i][j][k] + " ");
        }
        System.out.println();
      }
      System.out.println();
    }
  }
}
