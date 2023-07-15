#include<iostream>
#include<vector>

using namespace std;
void printVector(vector<int> &data){
    data.push_back(14);
    for(int i = 0; i< data.size(); i++ ){
        cout<<data[i]<<"\t";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    vector<int> data = {1,2,3};
    printVector(data);
    printVector(data);
    printVector(data);
    printVector(data);
    printVector(data);
    printVector(data);
    return 0;
}
