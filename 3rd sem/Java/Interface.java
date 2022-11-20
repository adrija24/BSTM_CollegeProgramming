interface Bycycle
{
    int a = 15;
    void applyBreake(int decrement);
    void speedUp(int increment);
}
class Acycle implements Bycycle
{
    void blowHorn()
    {
        System.out.println("blow horn...");
    }
    public void applyBreake(int decrement)
    {
        System.out.println("Applying Brake");
    }
    public void speedUp(int increment)
    {
        System.out.println("Applying Speedup");
    }
}
public class Interface {
    public static void main(String[] args) {
        Acycle a = new Acycle();
        a.applyBreake(5);
        System.out.println(Acycle.a);
        //Acycle.a = 10;
        a.speedUp(10);
    }
}
