#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
void print(int val){
    cout << "This is the value: "<<val << endl;
}
int main(void){

    int x,y;
    cout << "Enter x,y :";
    cin >> x;
    cin >> y;
    int res = sum(x,y);
    print(res);
    return 0;
}