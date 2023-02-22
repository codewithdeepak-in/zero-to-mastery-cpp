#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number";
    cin>>a;
    if(a%2 == 0){ // Here we use modulus operator.
        cout<<"The given number is even number";
    }else{
        cout<<"The given number is odd number";
    }
}