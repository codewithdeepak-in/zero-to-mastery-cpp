#include<iostream>
using namespace std;

int main(){
    int buget;
    cout<<"Enter your buget"<<endl;
    cin>>buget;
    if(buget>5000){
        if(buget>10000){
            cout<<"Go for roadtrip with neha";
        }else{
            cout<<"Go for resturant with neha";
        }
    }else if(buget<= 5000 && buget >= 3000){
        cout<<"Go for date with rashi";
    }else{
        cout<<"Friends are always their for us";
    }
}