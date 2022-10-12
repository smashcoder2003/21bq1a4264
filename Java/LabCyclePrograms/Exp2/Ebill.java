package LabCyclePrograms.Exp2;
import java.util.Scanner;
public class Ebill {
    private int consumer_no;
    private String consumer_name;
    private int previous_month_reading;
    private int current_month_reading;
    private String type_of_eb;
    private int no_of_units;

    Ebill() {
        Scanner a = new Scanner(System.in);
        System.out.println("Enter consumer name: ");
        consumer_name = (a.nextLine());
        System.out.println("Enter consumer no: ");
        consumer_no = (a.nextInt());
        System.out.println("Enter previous month reading: ");
        previous_month_reading = a.nextInt();
        System.out.println("Enter current month reading: ");
        current_month_reading = a.nextInt();
        System.out.println("Enter Type of connection: \n1.Domestic\n2.Commercial");
        type_of_eb = a.next();
        if(previous_month_reading <0) previous_month_reading = 0;
        if(current_month_reading <0) current_month_reading = 0;
        if (current_month_reading > previous_month_reading) {//300--> 800 : 800 -300 --> 500
            no_of_units = current_month_reading - previous_month_reading;
        } else no_of_units = current_month_reading;
    }

    double getEbill(String type_of_eb) {
        if (type_of_eb.equals("1")) {
            if (this.no_of_units <= 100) {
                return no_of_units;
            }
            else if (this.no_of_units <= 200) {
                return 100 + (no_of_units - 100) * 2.50;
            }
            else if (this.no_of_units <= 500) {
                return (100 + (100 * 2.5) + (no_of_units - 200) * 4);
            }
            else if (this.no_of_units > 500) {
                return (100 + (100 * 2.5) + (300 * 4) + (no_of_units - 500) * 7);
            }
            return 0;
        }
        else if (type_of_eb.equals("2")){
                if (this.no_of_units <= 100) {
                    return no_of_units * 2;
                }
                else if (this.no_of_units <= 200) {
                    return 100*2 + (no_of_units - 100) * 4.5;
                }
                else if (this.no_of_units <= 500) {
                    return (100 + (100 * 4.5) + (no_of_units - 200) * 6);
                }
                else if (this.no_of_units > 500) {
                    return (100 + (100 * 4.5) + (300 * 6) + (no_of_units - 500) * 7);
                }
                return 0;
            }
        return 0;
    }
    public static void main(String[] args){
        Ebill obj1 = new Ebill();
        double result = obj1.getEbill(obj1.type_of_eb);
        System.out.println("Your ebill is : " +  result + "$");
    }
}