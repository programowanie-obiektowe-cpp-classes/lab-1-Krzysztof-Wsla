class Wektor2D
{
private:
    void   setX(double X) { x = X; }
    double getX() { return x; }
    void   setY(double Y) { y = Y; }
    double getY() { return y; }
    /*
            Wektor2D()
            {
                    double X=x;
                    double Y=y;
                    double norm = sqrt(X * X + Y * Y);
                    void print(); { std::print("\nwektor: [{},{}]\t", x, y); }
            }

            ~Wektor2D()
            {
                    std::print("Wektor [{},{}] usuniety!\n", x, y);
            }
            */

public:
    double x;
    double y;

    Wektor2D() { std::print("W = [{},{}]\n", getX, getY); }
};

/*
Wektor2D operator+(Wektor2D A, Wektor2D B)
{
        Wektor2D C;
        C.x = A.x + B.x;
        C.y = A.y + B.y;

        return C;
}

double operator*(Wektor2D A, Wektor2D B)
{
        return A.x * B.x + A.y * B.y;
}
*/
    // Tutaj napisz implementacje klasy Wektor2D
