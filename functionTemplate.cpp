#include<iostream>
using namespace std;

template <typename T>
void swap_(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap_(T a[], T b[], int size){
    for (int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    
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

    

    int ones[] = {1,1,1,1,1};
    int nines[]= {9,9,9,9,9};
    cout<<"\n\n Before swap\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<nines[i]<<"\t"<<ones[i]<<endl;
    }
    swap_(ones,nines,5);
    cout<<"After swap\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<nines[i]<<"\t"<<ones[i]<<endl;
    }

    return 0;
}
