#include<iostream>
#include "math_util.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Rectengle rectengle;

    cout<<"Enter Length: ";
    cin>>rectengle.length;
    cout<<"Enter Weidth: ";
    cin>>rectengle.weidth;

    double area1 = utils::area(rectengle);
    cout<<"Area of the rectengle is = "<< area1<<endl;

    return 0;
}

