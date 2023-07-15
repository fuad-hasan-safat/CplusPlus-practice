#include <iostream>
#include <cmath>
// #include <stdio.h>
using namespace std;

double eXponential(double, int);
void eXponential1(double, int);

int main()
{
    // int num, ex;
    // double  result;
    // cout<<"Enter a number: ";
    // cin>>num;
    // cout<<"Enter power: ";
    // cin>>ex;

    // eXponential1(num,ex);

    // result = eXponential(num,ex);

    // printf("%d power %d == %lf\n",num,ex,result);


    auto x = 10U;
    cout<<x<<endl;

    auto y = 5ULL;
    cout<<y<<endl;

    auto z = "i am hasan\n";
    cout<<z;

    auto a = 5.0f;
    cout<<a<<endl;

    auto b = 5.0L;
    cout<<b<<endl;


    return 0;
}



double eXponential(double base, int power){
    double result = 1;
    int count = abs(power);

    if(power == 0) return 1;
    else{
        for (int i = 0; i < count; i++)
        {
            result = result*base;
        }
        if(power<0) return 1/result;
        else return result;
    }
}


void eXponential1(double base, int power){
    double result = 1;
    int count = abs(power);

    if(power == 0) cout<<base <<" raised by "<<power<< " is 1\n";
    else{
        for (int i = 0; i < count; i++)
        {
            result = result*base;
        }
        if(power<0) result = 1/result;
        cout<<base <<" raised by "<<power<< " is "<<result<<endl;
    }
}