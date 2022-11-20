abstract class ParentClass{
    public ParentClass()
    {
        System.out.println("Hello!!! Welcome to our home.");
    }
    abstract public void meth1();
    abstract public void meth2();
}
class child extends ParentClass{
    @Override
    public void meth1()
    {
        System.out.println("Good morning");
    }
    @Override
    public void meth2()
    {
        System.out.println("Good night");
    }
}
public class AbstractClass {
    public static void main(String[] args) {
      child c = new child();
      c.meth1();  
    }
    
}
