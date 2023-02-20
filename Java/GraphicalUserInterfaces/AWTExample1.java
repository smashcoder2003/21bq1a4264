package GraphicalUserInterfaces;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

// creating frame container with the use of inheritance
public class AWTExample1 extends Frame implements ActionListener{
    JButton b = new JButton("Click Me!");
    AWTExample1(){
        // setting button position on screen
        b.setBounds(30,100,100,100);
        b.addActionListener(this);
        // adding button into frame
        add(b);
        // frame size 300 width and 300 height
        setSize(300,300);
        // b.setSize(100,100);
        // setting the title of Frame
        setTitle("My first AWT PROJECT");
        // no layout manager
        setLayout(null);
        // now frame will be visible , by default it is not visible
        setVisible(true);
        
    }

    public static void main(String[] args) {
        AWTExample1 user = new AWTExample1();
        user.setSize(100,100);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        b.setText("clicked");
    }
}
