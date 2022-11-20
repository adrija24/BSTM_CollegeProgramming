class Info{
    int r, h;
    public  int getR()
    {
        return r;
    }
    void setR(int r)
    {
        this.r = r;
    }
    public int getH()
        {
            return h;
        }
    void setH(int h)
    {
        this.h =h;
    }
    public double surfaceArea()
    {
        return 2 * 3.14 * r *(r + h);
    }
    public double volume()
    {
        return 3.14 * r * r * h;
    }
    void Info(int r, int h)
    {
        System.out.println("Surface Area = " + 2 * 3.14 *r *(r + h));
    }
}
public class Cylinder {
    public static void main(String[] args) {
        Info ob = new Info();
        ob.setR(5);
        System.out.println("Radius = " + ob.getR());
        ob.setH(10);
        System.out.println("Height = " + ob.getH());
        System.out.println("Surface Area = " + ob.surfaceArea());
        System.out.println("Volume = " + ob.volume());
        ob.Info(5,10);
    }
}
