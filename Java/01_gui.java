import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI_frame implements ActionListener {
    JFrame fr = new JFrame();
    JFrame fr2 = new JFrame();

    JLabel l1 = new JLabel("User Name");
    JLabel l2 = new JLabel("Password");
    JLabel log_in = new JLabel("Login Successful!!!!");

    JButton b1 = new JButton("Login");

    JTextField t1 = new JTextField();
    JTextField t2 = new JTextField();

    public GUI_frame(){
        l1.setBounds(50, 80, 80, 30);
        t1.setBounds(150, 80, 150, 30);

        l2.setBounds(50, 150, 80, 30);
        t2.setBounds(150, 150, 150, 30);

        b1.setBounds(140, 220, 100, 30);
        b1.addActionListener(this);

        fr.add(l1);
        fr.add(t1);

        fr.add(l2);
        fr.add(t2);

        fr.add(b1);

        fr.setSize(400,400);
        fr.setTitle("Login Page");
        fr.setLayout(null);
        fr.setVisible(true);
    }

    public void actionPerformed(ActionEvent e){
        if(t1.getText().equals("Admin") && t2.getText().equals("1234")){
            System.out.println("Logged In");
            fr.setVisible(false);

            log_in.setBounds(50 , 200, 300, 50);
            fr2.add(log_in);

            fr2.setSize(400,400);
            fr2.setTitle("Logged in!!");
            fr2.setLayout(null);
            fr2.setVisible(true);
        }
        else
            System.out.println("Else");
    }
}


public class Main {

    public static void main(String[] args)
    {
        GUI_frame gui_1 = new GUI_frame();


    }
}
