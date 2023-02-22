#include<iostream>
using namespace std;

int main(){
    int fun = 1;
    int fact;
    cout<<"Enter the number whose factorial you want to calculate"<<endl;
    cin>>fact;
    for (int i = 1; i <= fact; i++)
    {
        fun *= i;
        /* code */
    }
    cout<<"Factorial of the number \n"<<endl;
    cout<<fun;
    return 0;
    
}