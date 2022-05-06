#include <iostream>
#include <cstdlib>
using namespace std;
int main (void){
    srand(time(NULL));
    char * str = new char[10];
    str[0] = 'e';
    str[1] ='r';
    str[2] ='f';
    str[3] ='s';
    str[4] ='1';
    cout << str<<endl;
    int ** ptr ;//= new int *[10];
    ptr = new int*[10];
    for(int i=0;i<10;i++){
        ptr[i] = new int[10];
        for(int y=0;y<10;y++){
            ptr[i][y] = rand()%10;
            cout << ptr[i][y]<<" ";
        }
        cout << endl;
    }
    //delete [] *ptr;
    return 0;
}