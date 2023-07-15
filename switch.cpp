#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    enum season{summer, winter, rainy, spring, autumn};

    season now = rainy;

    switch (now)
    {
    case summer:
        cout<<"Its summer season\n";
        break;
    
    default:
        cout<<"NULL\n";
        break;
    }


    




    return 0;
}
