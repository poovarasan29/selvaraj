public static void main(String args[]) {
    double num = 67.5;
    if (num % 2 == 0)
        System.out.println("OK");
    else if (num % 2 < 2.5)
        num = num - num % 2;
    else
        num = num + (2 - num % 2);
    System.out.println(num);

}
