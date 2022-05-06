#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){

    cout << "Guess Game \n";
    int value = 0;
    int guess = 0;
    srand(time(NULL));
    do{
        value = rand()%100;
        cout << "Guess a number: ";
        cin >> guess;
        if(guess == value){
            cout << "You wine!\n";
            break;
        }
    }while(guess!=value);
    return 0;
}