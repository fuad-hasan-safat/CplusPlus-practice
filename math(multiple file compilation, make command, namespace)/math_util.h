#ifndef MATH_UTILS
#define MATH_UTILS
struct Rectengle{
    double length;
    double weidth;
};

namespace utils
{
    double area(Rectengle rectengle);
    double area(double length, double weidth);
    double area(double length);
    int pow(int base, int pow = 2);
}

#endif