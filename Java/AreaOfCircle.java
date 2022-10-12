import java.util.Scanner;
 public class AreaOfCircle
 {
   public static void main(String[] arg)
    {
      Scanner input = new Scanner(System.in); 
      System.out.print("\nenter r:");
      double r=input.nextDouble();
      double Area=r*r*3.14;
      System.out.println("the area of circle is "+Area);
    }
 }
