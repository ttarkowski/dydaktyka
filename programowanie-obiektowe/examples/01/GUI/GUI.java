import javax.swing.JOptionPane;

public class GUI {
    public static void main(String[] args) {
        double x =
            Double.parseDouble(JOptionPane.showInputDialog("Podaj wartość zmiennoprzecinkową"));
        JOptionPane.showMessageDialog(null, Double.toString(x));
    }
}
