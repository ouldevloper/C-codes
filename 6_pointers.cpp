#include <iostream>
using namespace std;

int main(void){

    int value=10;
    int *intptr = &value;
    *intptr = 100;
    char * str = "abdellah";
    cout<< "The pointer value : "<< *intptr << " Variable value : "<< value<<endl;
    cout<< "the name is : "<<str<<endl;
    return 0;
}