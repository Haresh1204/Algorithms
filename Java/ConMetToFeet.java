import java.util.Scanner;
class ConMetToFeet
{
 public static void main(String[] args)
 {
  
   int meter;
   double feet;
   Scanner input=new Scanner(System.in);
   System.out.print("enter number to convert it to feet:");
   meter=input.nextInt();
   feet=meter*3.28;
   System.out.println("total feet of "+meter+" meter = "+feet);
 }
}