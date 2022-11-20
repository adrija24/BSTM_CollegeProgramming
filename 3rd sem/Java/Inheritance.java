class base
{
    public int x;
    public int getX()
    {
        return x;
    }
    public void setX(int x)
    {
        this.x = x;
    }
    public void printMe()
    {
        System.out.println("This is base class");
    }
}
class derived extends base
{
    public int y;
    public int getY()
    {
        return y;
    }
    public void setY(int y)
    {
        this.y = y;
    }
}
public class Inheritance {
    public static void main(String[] args) {
        //implementing base class or parent class
        base b = new base();
        b.setX(10);
        System.out.println(b.getX());
        b.printMe();

        //implementing derived class or child class
        derived d = new derived();
        d.setY(5);
        System.out.println(d.getY());
        d.setX(1);
        System.out.println(d.getX());
    }
}
