package com.Bhargav.Interfaces.DependencyInjection;

public class TaxReport {
    TaxCalculator calculator;
    TaxReport(TaxCalculator calculator) {
        this.calculator = calculator;
    }
    public void show(TaxCalculator calculator) {
        double tax = calculator.calculateTax();
        System.out.println(tax);
    }
    void setCalculator(TaxCalculator calculator) {
        this.calculator = calculator;
    }

}
// Constructor injection
// Method injection
// Setter injection