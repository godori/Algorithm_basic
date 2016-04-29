import java.util.Scanner;

public class inputNumber{

  public static void main(String[] args){

    String num;

    Scanner sc = new Scanner(System.in);

    System.out.println("What is your number? :");
    num = sc.nextInt();

    System.out.println("NUMBER : "+num);
  }

}
