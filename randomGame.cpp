#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>

using namespace std;

void playGame(){
    int randomNum = rand()%225;
    cout<<"Random num "<< randomNum<< endl;
    int x = 3, number;
    int flag = 0;
    do{
        cout<<"Guess a number:";
        cin>>number;
        if(number == randomNum) {cout<<"Great u guessed correctly\n"; flag = 1; break; }
        else if(number<randomNum) {cout<<"Your guess is lower\n";}
        else {cout<<"Your guess is higher\n";}
        x--;
    } while (x>0);
    
    if(!flag) cout<<"Time out!!! try again!!\n";

}

int main(int argc, char const *argv[])
{
    int choice;
    do
    {
        cout<<"0. press for exit\n1. press for game\n";
        cin>>choice;

        switch (choice)
        {
        case 0:
            cout<<"Exit\n";
            break;
        
        case 1:
            playGame();
            break;
        default:
            cout<<"!!!---- Please chouse 0 or 1 ----!!!\n";
        }
    } while (choice != 0);
    
    
    return 0;
}
