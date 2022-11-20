public class VowelConsonant {
    public static void main(String[] args) {
        String s = "She is a good girl";
        int vCount = 0, cCount = 0;
        s = s.toLowerCase();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
                    || s.charAt(i) == 'u') {
                vCount++;
            } else if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                cCount++;
            }

        }
        System.out.println("Number of vowel: " + vCount);
        System.out.println("Number of consonant: " + cCount);
    }
}
