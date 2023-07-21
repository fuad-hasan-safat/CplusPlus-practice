#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream file("hello.txt", ios::app);

    vector<string> names;
// write on file
    for (int i = 0; i < 3; i++)
    {
        string str;
        getline(cin,str);
        names.push_back(str);
    }

    for(string name : names){
        file<<name<<endl;
    }
    file.close();

    string line;
    ifstream readFile("myText.txt",ios::out);
    while ( getline(readFile,line) )
    {
      cout << line << '\n';
    }
    readFile.close();
    return 0;
}
