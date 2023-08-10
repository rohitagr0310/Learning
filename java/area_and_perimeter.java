public class area_and_perimeter {

  public static void main(String[] args) {
    System.out.println("radius,perimeter,area");
    for (int i = 0; i < 100; i++) {
      values(i);
    }
  }

  static void values(double radius) {
    double perimeter;
    double area;

    perimeter = 2 * Math.PI * radius;
    area = Math.PI * (radius * radius);

    System.out.println(radius + "," + perimeter + "," + area);
  }
}
