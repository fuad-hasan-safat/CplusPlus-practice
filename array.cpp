#include<iostream>
#include<string>
#include<limits>

using namespace std;

void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
}

int main(int argc, char const *argv[])
{
    const int SIZE = 10;
    int schors[SIZE];

    int count = 0;
    string str;

    for (int i = 0; i < SIZE; i++)
    {
        if(cin>>schors[i]){
            count++;
        }else{
            cout<<"Please enter integer only!!!\n";
            break;
        }
    }
    printArray(schors,count);
    cin.clear();
    // cin.ignore(10000,'\n');
    // cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cin>>str;
    cout<<str<<endl;
    return 0;
}
