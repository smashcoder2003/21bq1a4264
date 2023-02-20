package GraphicalUserInterfaces;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AWTExampleByInstantiatingFrameClass implements ActionListener {
    private JButton b = new JButton("Submit");
    AWTExampleByInstantiatingFrameClass() {
        Frame f = new Frame();
        Label I = new Label("Name: ");
        TextField t = new TextField();
        I.setBounds(20,80,80,30);
        t.setBounds(20,100,80,30);
        b.setBounds(100,100,150,30);
        b.addActionListener(this);
        f.add(b);
        f.add(I);
        f.add(t);
        f.setSize(400,300);
        f.setTitle("Awt example 2");
        f.setLayout(null);
        f.setVisible(true);
     }
     public static void main(String[] args) {
        AWTExampleByInstantiatingFrameClass obj1 = new AWTExampleByInstantiatingFrameClass();
     }

    @Override
    public void actionPerformed(ActionEvent e) {
        b.setText("Submitted");
    }
}

