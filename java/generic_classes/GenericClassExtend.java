package generic_classes;

class MyGenericClass<T extends Number> {

  private T data;

  public MyGenericClass(T data) {
    this.data = data;
  }

  public double square() {
    return data.doubleValue() * data.doubleValue();
  }
}

class GenericClassExtend {

  public static void main(String args[]) {
    MyGenericClass<Integer> integerObj = new MyGenericClass<>(5);

    double result1 = integerObj.square();
    System.out.println(result1);
  }
}
