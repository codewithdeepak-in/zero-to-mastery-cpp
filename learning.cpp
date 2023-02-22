#include <iostream> // preprocessor directive used for include files.
using namespace std;

int main(){ // main is make to know complier from where the compliation of the program take place
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int c; // Declare variable
    c = 34; // Intializing variable 
    cout<<"The size of the variable is  "<< sizeof(c)<< "\n"; // used to display output in quotation marks.
    float d;
    d = 32;
    cout<<"The size of the float is "<< sizeof(d)<< "\n"; // >> this is insertion operator.
    char a;                                               // << extration operator.
    short int df;
    long int bf;
    cout<<"The size of the short int is "<< sizeof(df)<< "\n";
    cout<<"The size of the long int is "<< sizeof(bf)<< "\n";
    return 0;
}   