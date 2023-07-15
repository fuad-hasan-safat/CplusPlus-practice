#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string myString = "Hello";
    myString += " there";
    cout<<myString<<endl;
    // string modifire
    myString.append(", how are yoy?");
    string dummy = myString;
    cout<<"after append-->"+myString<<endl;
    myString.insert(6,"***");
    cout<<"after insert-->"+myString<<endl;
    dummy.replace(6,6,"*********");
    cout<<"after replace-->"+dummy<<endl;
    dummy.replace(dummy.find("*********"),9, "there,");
    cout<<"current dummy-->"+dummy<<endl;
    return 0;
}
