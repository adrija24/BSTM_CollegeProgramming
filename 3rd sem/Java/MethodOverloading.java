// class A{
//     private void A(){
//         System.out.println("Constructor of A");
//     }
//     void Display(){
//         A();
//     }
    
// }

// public class B{
//     public static void main(String[] args) {
//         A a1 = new A();
//         a1.Display();
//     }
// }
class Room {
    float length;
    float breadth;
    Room(float x, float y)
    {
        length = x;
        breadth = y;
    }
    Room(float x)
    {
        length = breadth = x;
    }
    float area()
    {
        return(length * breadth);
    }
}

public class MethodOverloading {
    public static void main(String[] args) {
        Room room1 = new Room(15.2f, 10.5f);
        Room room2 = new Room(15.42f);
        System.out.println("Area = " + room1.area());
        System.out.println("Area = " + room2.area());
    }
}