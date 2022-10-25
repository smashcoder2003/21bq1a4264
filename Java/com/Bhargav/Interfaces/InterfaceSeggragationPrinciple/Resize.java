package com.Bhargav.Interfaces.InterfaceSeggragationPrinciple;

public class Resize implements Draggable,Resizable {

    @Override
    public void drag() {
        System.out.println("Drag your objects here.");
    }

    @Override
    public void resize() {
        System.out.println("Resize your object.");
    }
}