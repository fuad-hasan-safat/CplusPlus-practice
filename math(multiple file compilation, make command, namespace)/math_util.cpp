#include "math_util.h"

namespace utils
{
    double area(Rectengle rectengle){
        return rectengle.length*rectengle.weidth;
    }
    double area(double length, double weidth){
        return length*weidth;
    }
    double area(double length){
        return length*length;
    }

    int pow(int base, int pow){
        int total = 1;
        for (int i = 0; i < pow; i++)
        {
            total *= base;
        }
        return total;
    }
}


