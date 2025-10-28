class Wektor2D
{
    double x;
    double y;

public:
    void   setX(double X) { x = X; };
    double getX() { return x; };
    void   setY(double Y) { y = Y; };
    double getY() { return y; };

    Wektor2D()
    {
        x = 0.;
        y = 0.;
    }
    Wektor2D(double A, double B)
    {
        x = A;
        y = B;
    }
    ~Wektor2D() {  }
};

Wektor2D operator+(Wektor2D A, Wektor2D B)
{
    Wektor2D wynik;

    wynik.setX(A.getX() + B.getX());
    wynik.setY(A.getY() + B.getY());

    return wynik;
}

double operator*(Wektor2D A, Wektor2D B)
{
    return A.getX() * B.getX() + A.getY() * B.getY();
}

