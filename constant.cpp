#include <iostream>

using namespace std;

#define X 10;

int main(int argc, char const *argv[])
{
    const int a = 20;

    enum{ y = 40};

    cout<<"X = " << X;
    cout<<endl;

    if(y == 40) cout<<"a = " <<a <<endl;
    

    return 0;
}
