package MyWork.Sorting.Hackathon;

public class mountain {
    public static int calc_weight(int input1, int input2, int input3) {
        int total_weight = input2;

        if (input1 == 1) {
            return input2;
        }

        for (int i=2; i <= input1; i++, input2 += input3) {
            total_weight += ((input2 * (i-1)) + ((input2 + input3) * i));
        }
        return total_weight;
    }
    public static void main(String[] args) {
        int result = calc_weight(4, 1, 5);
        System.out.println(result);
    }
}

