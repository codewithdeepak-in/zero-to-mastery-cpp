#include<iostream>
using namespace std;

int main(){
    int a,b,c; // intializing the numbers;
    cout<<"Enter the Three number";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"A is the greatest number";
        }
    }else if(b>c){
        cout<<"B is the greatest number";
    }else{
        cout<<"C is the greatest number";
    }
}