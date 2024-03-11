public class Rectangle {
    // Zmienne składowe
    private double a;
    private double b_; // Inna konwencja…

    // Konstruktor
    public Rectangle(double a, double b) {
        this.a = a;
        b_ = b; // … która nie wymaga tutaj użycia `this`.
    }

    // Metody składowe
    public double area() { return a * b_; }
    public double get_a() { return a; }
    public double get_b() { return b_; }

    public static void main(String[] args) {
        Rectangle r = new Rectangle(4.2, 1.0);
        System.out.println("Wymiary: " + r.get_a() + " x " + r.get_b());
        System.out.println("Powierzchnia: " + r.area());
    }
}
