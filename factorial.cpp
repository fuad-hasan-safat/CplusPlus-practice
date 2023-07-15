#include<iostream>

using namespace std;

int factorial_forLoop(int number){
    if( number == 1 || number == 0) return 1;
    for (int i = number-1; i > 0; i--)
    {
        number *= i;
    }
    return number;
}

int factorialRecursion(int number){
    if(number == 0) return 1;
    return number*factorialRecursion(number-1);
}

int factorial_whileLoop(int number){
    if( number == 1 || number == 0) return 1;
    int a = number-1;
    while(a>0){
        number*=a;
        a--;
    }
    return number;
}

int factorial_DowhileLoop(int number){
    if( number == 1 || number == 0) return 1;
    int a = number-1;
    do{
        number*=a;
        a--;
        
    }while (a>0);
    return number;
}

int main(int argc, char const *argv[])
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"factorial of "<<number<< " = "<<factorial_forLoop(number)<<endl;
    cout<<"factorial of "<<number<< " = "<<factorialRecursion(number)<<endl;
    cout<<"factorial of "<<number<< " = "<<factorial_whileLoop(number)<<endl;
    cout<<"factorial of "<<number<< " = "<<factorial_DowhileLoop(number)<<endl;
    return 0;
}
