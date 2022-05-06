#include <iostream>
#include <string>
using namespace std;

int main(void){
    int age = 25;
    char * message = "Welcome Mr.";
    char gender  = 'M';
    long longvar = 346523462362L;
    double quantity = 10.445434;
    float salary = 3500.00f;
    short index=1;
    auto var = "hello world";
    bool isMarried = false;
    string name="";
    cout << "Enter your name" << endl << "$ "; // write to stdout
    cin >> name;   // read form user
    cout << message << name << " !"<< endl; // write to stdout
    return 0;
}