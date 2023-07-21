#include<iostream>
#include<vector>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<vector<int>> mtrx ={
        {1,2,3,55},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < mtrx.size(); i++)
    {
        for (int j = 0; j < mtrx[i].size(); j++)
        {
            cout<<mtrx[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

