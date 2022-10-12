import java.util.Scanner;
class BMI
{
  public static void main(String[] arg)
   {
     double weight,height;
     double bmi;
     Scanner input =new Scanner(System.in);
     System.out.print("enter your weight in pound: ");
     weight=input.nextDouble();
     System.out.print("enter your height in inch: ");
     height=input.nextDouble();
     double kg=weight*0.45359237;
     double met=height*0.0254;
     double squ=met*met;
     
     bmi=kg/squ;
     System.out.println("body mass index of your "+weight+" and "+height+" is :"+bmi+" kg/m^2");
    }
}    
