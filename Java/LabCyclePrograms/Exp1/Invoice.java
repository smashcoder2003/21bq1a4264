package LabCyclePrograms.Exp1;
import java.util.Scanner;
public class Invoice {
    private String partnumber;
    private String partdescription;
    private int quantity;
    private double price;
    Invoice(){
        partnumber = "";
        partdescription = "";
        quantity = 0;
        price = 0.0;
    }
    void setPartNumber(String pno){
        partnumber = pno;
    }
    String getPartNumber(){
        return partnumber;
    }
    void setPartdescription(String pno) {
        partdescription = pno;
    }
    String getPartDescription(){
        return partdescription;
    }

    void setQuantity(int pno) {
        quantity = pno;
    }
    int getQuantity(){
        return quantity;
    }
    void setPrice(double ps){
        price = ps;
    }
    double getPrice(){
        return price;
    }
    double getInvoice(){
        if (price < 0) {
            price = 0;
        }
        if (quantity < 0){
            quantity =0;
        }
        return quantity * price;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        Invoice a = new Invoice();
        System.out.println("Enter PartNumber: ");
        a.setPartNumber(scan.nextLine());
        System.out.println("Enter Partdescription: ");
        a.setPartdescription(scan.nextLine());
        System.out.println("Enter Price: ");
        a.setPrice(scan.nextDouble());
        System.out.println("Enter Quantity");
        a.setQuantity(scan.nextInt());
        System.out.println("The Invoice for your purchase is : ");
        System.out.println(a.getInvoice());
    }
}