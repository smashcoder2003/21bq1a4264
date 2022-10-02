package TextbookCodeSnippets;

public class LightDistance {
    public static void main(String[] args){
        int lightspeed;
        long distance;
        long seconds;
        long days;
        lightspeed = 186000;
        days = 2000;
        seconds = days * 24 * 60 * 60;
        distance = lightspeed * seconds;
        System.out.print("In " + days);
        System.out.print(" days light will travel " + distance);
        System.out.print(" miles");
    }
}
