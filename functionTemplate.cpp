#include<iostream>
using namespace std;

template <typename T>
void swap_(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 9;
    swap_(a,b);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    string firstName = "Fuad";
    string lastName = "Hasan";
    swap_(firstName,lastName);
    cout<<"firstName = "<<firstName<<", lastName = "<<lastName<<endl;

    return 0;
}
