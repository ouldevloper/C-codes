#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    short index=0;
    int val = 123456576;
    string reverseInt="";
    string message ;
    string crypted = "";
    char op = 'C';
    do{
        cout << "Enter your message $: ";
        cin >> message;
        for(;index<message.size();index++){
            crypted+=(char)(message[index]^2);
        }
        cout << endl<<"Cryptred data: " << crypted<<endl;
        while(val>0){
            //reverseInt += (char)(val%10);
            reverseInt += (char)((val%10)+48);
            val /=10;
        }
        cout <<"End reversing int resulte: "<< reverseInt<<endl;
        cout << endl<<"Enter c/C to continue : ";
        cin >> op; 
    }while(op=='c' || op=='C');
    return 0;
}