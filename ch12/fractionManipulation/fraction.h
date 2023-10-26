struct fraction{
    int numerator, denominator;

    fraction();
    fraction(int, int);


    void print();
    void plus(fraction f2);
    void minus(fraction f2);
    void times(fraction f2);
    void divided_by(fraction f2);
    std::string to_string();
};