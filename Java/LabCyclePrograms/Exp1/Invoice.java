package LabCyclePrograms.Exp1;
import java.util.Scanner;
public class Invoice {
    private String partnumber;
    private String partdescription;
    private int quantity;
    private double price;
    public Invoice(){
        partnumber = "";
        partdescription = "";
        quantity = 0;
        price = 0.0;
    }
    public void setPartNumber(String pno){
        partnumber = pno;
    } // camel convention
    String getPartNumber(){
        return partnumber;
    }
    public void setPartdescription(String xyz) {
        partdescription = xyz;
    }
    String getPartDescription(){
        return partdescription;
    }

    public void setQuantity(int pno) {
        if (pno < 0){
        }
        else quantity = pno;
    }
    int getQuantity(){
        return quantity;
    }
    public void setPrice(double ps){
        if (ps < 0) {
        }
        else price = ps;
    }
    double getPrice(){
        return price;
    }
    public double getInvoice(){
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
        System.out.println("Total: " + a.getInvoice());
    }
}
