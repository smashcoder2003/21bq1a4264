package com.Bhargav.Interfaces.DependencyInjection;

public class TaxCalculatorbhargav {
    double tax;
    TaxCalculatorbhargav(double a){
        this.tax = a;
    }
    double calculateTax(){
        return tax * 0.4;
    }
}
class Test{
    public static void main(String[] args){
        TaxCalculatorbhargav ob1 = new TaxCalculatorbhargav(90000.25);
        System.out.println(ob1.calculateTax());
    }
}
