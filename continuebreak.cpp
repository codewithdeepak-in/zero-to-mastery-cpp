#include<iostream>
using namespace std;

int main(){
    // continue statement is used when we have to go for the next iteration. without using the current iteration
    // break statement is used when you have to exit the loop.
    int pay = 3000;
    for (int i = 0; i < 30; i++){
        if (i % 2 == 0 ){
            continue;
        }
        if(pay == 0){
            break;
        }
        pay = pay - 300;
        cout<<"\n"<<i;
    }
    
}