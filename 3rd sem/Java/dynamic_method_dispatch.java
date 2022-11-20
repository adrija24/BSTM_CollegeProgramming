class Phone{
    public void greet()
    {
        System.out.println("Good morning");
    }
    public void name()
    {
        System.out.println("Turning on phone");
    }
}
class SmartPhone extends Phone
{
    public void hello()
    {
        System.out.println("Hello there");
    }
    public void name()
    {
        System.out.println("Turning on Smart phone");
    }
}
public class dynamic_method_dispatch {
    public static void main(String[] args) {
        Phone ob = new SmartPhone();
        ob.greet();
        ob.name();
    }
}
