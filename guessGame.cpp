#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

void printVector(vector<int> &data){
    for(int i = 0; i< data.size(); i++ ){
        cout<<data[i]<<"\t";
    }
    cout<<endl;
}

void playGame(){
    int randomNum = rand()%225;
    vector<int> guess;
     int x = 3, number;
    int flag = 0;
    do{
        cout<<"Guess a number:";
        cin>>number;
        guess.push_back(number);
        if(number == randomNum) {cout<<"Great u guessed correctly\n"; flag = 1; break; }
        else if(number<randomNum) {cout<<"Your guess is lower\n";}
        else {cout<<"Your guess is higher\n";}
        x--;
    } while (x>0);
    
    if(!flag) cout<<"Time out!!! try again!!\n";
    cout<<"your guess were: ";
    printVector(guess);
}

int main(int argc, char const *argv[])
{
    playGame();
    return 0;
}
