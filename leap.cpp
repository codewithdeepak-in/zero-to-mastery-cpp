#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter any year to check wheather it is leap year or not \n"<<endl;
    cin>>year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout<<"Year is leap year";
        /* code */
    }else{
        cout<<"Year is not a leap year";
}
    
}