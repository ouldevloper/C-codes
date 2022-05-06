#include <iostream>
#include <fstream>
#define FILE "file.txt"
using namespace std;
int main(void){
    ofstream input;
    ifstream output;
    input.open(FILE);

    input << "hello world"<<endl;
    input << "hello world"<<endl;
    input << "hello world"<<endl;
    input.close();
    output.open(FILE);
    while(!output.eof()){
        string tmp;
        //output >> tmp; //get only strings separateded by space
        getline(output,tmp); //get hole line
        cout <<tmp<<endl;
    }
    output.close();
    return 0;
}