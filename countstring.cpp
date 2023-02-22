#include<iostream>
using namespace std;

int main(){
    string text;
    int vowels = 0;
    cout<<"Enter the string \n";
    getline(cin, text);
    for (int i = 0; i < text.length(); i++){
        if(text[i] == 'a'|| text[i] == 'e'|| text[i] == 'i'|| text[i] == 'o'|| text[i] == 'u'|| text[i] ==   'A'|| text[i] == 'E'|| text[i] == 'I'|| text[i] == 'O'|| text[i] == 'U' ){
            vowels++;
        }
        /* code */
    }
    cout<<"Number of vowels in the string \n"<<vowels;

    
}