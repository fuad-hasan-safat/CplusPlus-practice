#include<iostream>
using namespace std;

void swap(int &a, int &b){
    a = a+b;
    b = a - b;
    a = a - b;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 9;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    swap(a,b);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0;
}
