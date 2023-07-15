#include<iostream>
#include<climits>

using namespace std;

int main(int argc, char const *argv[])
{
    short a;
    int b;
    long c;
    long long d;

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout<<"size of short datatype "<<sizeof(short)*8<<" bits\n";
    cout<<"size of int datatype "<<sizeof(b)*8<<" bits\n";
    cout<<"size of long datatype "<<sizeof(c)*8<<" bits\n";
    cout<<"size of long long datatype "<<sizeof(d)*8<<" bits\n\n";

    cout<<"size of unsigned short datatype "<<sizeof(aa)*8<<" bits\n";
    cout<<"size of unsigned int datatype "<<sizeof(bb)*8<<" bits\n";
    cout<<"size of unsigned long datatype "<<sizeof(cc)*8<<" bits\n";
    cout<<"size of unsigned long long datatype "<<sizeof(dd)*8<<" bits\n";

    cout<<"\n---------------- XXXXXXXXXXXXXXXXX --------------\n\n";

    cout<<"Uper limit of SHORT = "<<SHRT_MAX<<endl;
    cout<<"Lower limit of SHORT = "<<SHRT_MIN<<endl;

    cout<<"Uper limit of INTEGER = "<<INT_MAX<<endl;
    cout<<"Lower limit of INTEGER = "<<INT_MIN<<endl;

    cout<<"Uper limit of LONG = "<<LONG_MAX<<endl;
    cout<<"Lower limit of LONG = "<<LONG_MIN<<endl;

    cout<<"Uper limit of LONGLONG = "<<LLONG_MAX<<endl;
    cout<<"Lower limit of LONGLONG = "<<LLONG_MIN<<endl;


    return 0;
}
