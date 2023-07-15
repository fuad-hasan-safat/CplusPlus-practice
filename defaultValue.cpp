#include<iostream>
using namespace std;


double area(double length, double weidth = 1){
    return length*weidth;
}

int main(int argc, char const *argv[])
{

    cout<<area(10,5)<<endl;
    
    return 0;
}
