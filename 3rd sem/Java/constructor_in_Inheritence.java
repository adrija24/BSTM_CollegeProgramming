import javax.xml.transform.Source;

class base1
{
    public base1()
    {
        System.out.println("I am a parent class constructor");  //default constructor
    }
    base1(int x)
    {
        System.out.println("I am an overloaded constructor with value x = " + x);
    }
}
class child extends base1
{
    public child()
    {
        System.out.println("I am a child class constructor");   //default constructor
    }
    child(int x, int y)
    {
        super(x);
        System.out.println("I am an overloaded constructor of child with value y = " + y);
    }
}
class childOfChild extends child
{
    public childOfChild()
    {
        System.out.println("I an an child of child class constructor");   //default constructor
    }
    childOfChild(int x, int y, int z)
    {
        super(x, y);
        System.out.println("I am an overloaded constructor of child of child with value z = " + z);
    }
}
public class constructor_in_Inheritence {
    public static void main(String[] args) {
        //base1 b = new base1();
        //base1 b = new base1(10);
        //child c = new child();
        //child c = new child(10, 20);
        childOfChild cc = new childOfChild();
        //childOfChild cc = new childOfChild(10, 20, 30);
    }
}
