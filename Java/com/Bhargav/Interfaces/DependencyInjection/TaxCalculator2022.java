package com.Bhargav.Interfaces.DependencyInjection;

public class TaxCalculator2022 implements TaxCalculator {
     double taxableIncome;
    TaxCalculator2022(double taxableIncome) {
        this.taxableIncome = taxableIncome;
    }
    @Override
    public double calculateTax() {
        return taxableIncome * 0.3;
    }
}
