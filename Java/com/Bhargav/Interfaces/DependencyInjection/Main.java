package com.Bhargav.Interfaces.DependencyInjection;

public class Main {
    public static void main(String[] args) {
        TaxCalculator calculator = new TaxCalculator2022(1000);
        TaxReport report = new TaxReport(calculator);
        report.show(calculator);
        report.setCalculator(new TaxCalculator2021());
        report.show(new TaxCalculator2022(10000));
    }
}
