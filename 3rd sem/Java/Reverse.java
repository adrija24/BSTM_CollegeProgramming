public class Reverse {
    public static void main(String[] args) {
        String str = "RAM";
        System.out.println("The original string is "+str);
        System.out.print("After reverse the string is ");
        for(int i = str.length()-1; i >= 0; i-- )
        {
            System.out.print(str.charAt(i));
        }
    }
}
