#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));

    int SecretNumber = rand() % 100 + 1; // This will generate number between 1 and 100.
    int guess;
    cout<<"Welcome to the game of guessing number \n";

    do
    {
       cout<<"Enter your number \n";
       cin>>guess;
       if (guess < SecretNumber){
            cout<<"Your guessed lower than the number try bigger term \n";
       }else if(guess > SecretNumber){
            cout<<"Your guessed greater then the number try some small digit \n";
       }else{
            cout<<"Congragulation you got your number \n";
       }
       
    } while (guess != SecretNumber );
    

}