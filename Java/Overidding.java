class ai
{
    void hello()
     {
       System.out.println("Hello from Ai");
     }
}
class bi extends ai
{
    void hello()
     {
       System.out.println("Hello from Bi");
     }
}
class ci extends bi
{
    void hello()
     {
       System.out.println("Hello from Ci");
     }
}
class Overidding
{
 public static void main(String arg[])
  {
    ci obj = new ci();
    obj.hello();
  }
}